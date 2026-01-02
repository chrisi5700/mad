#!/usr/bin/env python3
"""
OpenGL gn.cppm Generator

Generates ergonomic C++ module bindings with STL types (span, string_view).
Groups functions by category and marks pointer functions for manual modernization.

Usage:
    python generate_gn.py <gl.xml> <output.cppm> [--api gl|gles2|gles1] [--profile core|compatibility] [--version X.Y]
"""

import argparse
import re
from pathlib import Path
from collections import defaultdict
from glxml_parser import GLRegistry, strip_gl_prefix
from module_spec import ModuleSpec, Function, FunctionParam

# Import gm spec builder
from generate_gl import build_gl_spec
from generate_gm import build_gm_spec


# ============ Function Categorization ============

# Category patterns: (category_name, [prefix_patterns])
# Order matters - first match wins
CATEGORY_PATTERNS = [
    ("Shaders", ["CreateShader", "DeleteShader", "IsShader", "GetShader", "Shader", "Compile", "ReleaseShader", "SpecializeShader"]),
    ("Programs", ["CreateProgram", "DeleteProgram", "IsProgram", "GetProgram", "Program", "Link", "Validate", "UseProgram", "Attach", "Detach", "GetAttached", "GetActiveAttrib", "GetAttribLocation", "BindAttribLocation", "GetFragData", "BindFragData", "GetActiveSubroutine", "GetSubroutine"]),
    ("Uniforms", ["Uniform", "GetUniform", "ProgramUniform", "GetActiveUniform", "GetnUniform"]),
    ("Vertex Arrays", ["CreateVertexArray", "DeleteVertexArray", "IsVertexArray", "GenVertexArray", "BindVertexArray", "GetVertexArray", "VertexArray", "VertexAttrib", "EnableVertexAttrib", "DisableVertexAttrib", "GetVertexAttrib", "BindVertexBuffer", "VertexBindingDivisor"]),
    ("Buffers", ["CreateBuffer", "DeleteBuffer", "IsBuffer", "GenBuffer", "BindBuffer", "GetBuffer", "Buffer", "MapBuffer", "UnmapBuffer", "FlushMapped", "CopyBuffer", "InvalidateBuffer", "NamedBuffer", "MapNamed", "UnmapNamed", "FlushMappedNamed", "CopyNamed", "InvalidateNamed", "ClearBuffer", "ClearNamedBuffer", "GetNamedBuffer", "GetActiveAtomicCounterBuffer"]),
    ("Textures", ["CreateTexture", "DeleteTexture", "IsTexture", "GenTexture", "BindTexture", "GetTexture", "Texture", "Tex", "ActiveTexture", "GenerateMipmap", "GenerateTextureMipmap", "BindImageTexture", "CompressedTex", "CopyTex", "GetCompressedTex", "ClearTexImage", "ClearTexSubImage", "CopyImageSubData", "GetInternalformat", "GetTex", "GetnTex", "GetnCompressedTex", "InvalidateTex"]),
    ("Samplers", ["CreateSampler", "DeleteSampler", "IsSampler", "GenSampler", "BindSampler", "GetSampler", "Sampler"]),
    ("Framebuffers", ["CreateFramebuffer", "DeleteFramebuffer", "IsFramebuffer", "GenFramebuffer", "BindFramebuffer", "GetFramebuffer", "Framebuffer", "Blit", "CheckFramebuffer", "NamedFramebuffer", "BlitNamed", "CheckNamed", "InvalidateFramebuffer", "InvalidateNamedFramebuffer", "InvalidateSubFramebuffer", "ClearNamedFramebuffer", "GetNamedFramebuffer", "ReadBuffer", "ReadPixels", "ReadnPixels"]),
    ("Renderbuffers", ["CreateRenderbuffer", "DeleteRenderbuffer", "IsRenderbuffer", "GenRenderbuffer", "BindRenderbuffer", "GetRenderbuffer", "Renderbuffer", "NamedRenderbuffer", "GetNamedRenderbuffer"]),
    ("Queries", ["CreateQuery", "DeleteQuery", "IsQuery", "GenQuery", "BeginQuery", "EndQuery", "GetQuery", "Query", "CreateQueries", "DeleteQueries", "GenQueries"]),
    ("Sync", ["FenceSync", "DeleteSync", "IsSync", "WaitSync", "ClientWaitSync", "GetSync"]),
    ("Transform Feedback", ["CreateTransformFeedback", "DeleteTransformFeedback", "IsTransformFeedback", "GenTransformFeedback", "BindTransformFeedback", "GetTransformFeedback", "TransformFeedback", "BeginTransformFeedback", "EndTransformFeedback", "PauseTransformFeedback", "ResumeTransformFeedback"]),
    ("Drawing", ["Draw", "MultiDraw", "Clear$", "ClearColor", "ClearDepth", "ClearStencil", "ColorMask", "SampleMask", "SampleCoverage"]),
    ("Compute", ["Dispatch", "MemoryBarrier"]),
    ("State", ["Enable", "Disable", "IsEnabled", "Get$", "GetBoolean", "GetDouble", "GetFloat", "GetInteger", "GetInteger64", "GetString", "GetMultisample", "GetError", "GetGraphicsResetStatus", "Hint", "PixelStore", "Finish", "Flush"]),
    ("Viewport & Scissor", ["Viewport", "Scissor", "DepthRange"]),
    ("Blending", ["Blend"]),
    ("Depth & Stencil", ["Depth", "Stencil"]),
    ("Rasterization", ["Cull", "FrontFace", "PolygonMode", "PolygonOffset", "LineWidth", "PointSize", "PointParameter", "ProvokingVertex", "ClipControl", "PrimitiveRestart", "ClampColor", "LogicOp", "MinSampleShading"]),
    ("Debug", ["Debug", "ObjectLabel", "ObjectPtrLabel", "GetObjectLabel", "GetObjectPtrLabel", "PushDebugGroup", "PopDebugGroup", "GetDebugMessageLog"]),
    ("Pipeline", ["CreateProgramPipeline", "DeleteProgramPipeline", "IsProgramPipeline", "GenProgramPipeline", "BindProgramPipeline", "GetProgramPipeline", "ActiveShaderProgram", "UseProgramStages"]),
    ("Conditional Rendering", ["BeginConditionalRender", "EndConditionalRender"]),
    ("Tessellation", ["PatchParameter"]),
]

def categorize_function(name: str) -> str:
    """Determine category for a function based on its name."""
    for category, patterns in CATEGORY_PATTERNS:
        for pattern in patterns:
            if pattern.endswith('$'):
                # Exact match for Get$ etc
                if name == pattern[:-1]:
                    return category
            elif name.startswith(pattern):
                return category
    return "Other"


# ============ Modernization Detection ============

def needs_modernization(func: Function) -> tuple[bool, str]:
    """
    Check if function has pointer params that could use span/string_view.
    Returns (needs_work, reason).
    """
    reasons = []

    for p in func.params:
        base_type = p.type.replace('const ', '').replace('*', '').strip()

        # String parameters
        if 'Char*' in p.type and 'const' in p.type:
            if '**' in p.type:
                reasons.append(f"{p.name}: span<string_view>")
            else:
                reasons.append(f"{p.name}: string_view")

        # Array output parameters (non-const pointers with size param)
        elif '*' in p.type and 'const' not in p.type and 'void' not in p.type:
            reasons.append(f"{p.name}: span output")

        # Array input parameters (const pointers)
        elif '*' in p.type and 'const' in p.type and 'void' not in p.type:
            reasons.append(f"{p.name}: span input")

    if reasons:
        return True, ", ".join(reasons)
    return False, ""


# ============ Code Generation ============

def generate_header(registry: GLRegistry) -> str:
    return f'''// Auto-generated ergonomic OpenGL module - do not edit
// OpenGL {registry.version} {registry.profile.title()} Profile
//
// This module provides STL-friendly wrappers around OpenGL functions.
// Functions marked with TODO need manual implementation using span/string_view.

export module gn;

import gm;

#include <span>
#include <string_view>
'''


def generate_type_reexports(gm_spec: ModuleSpec) -> str:
    """Re-export types from gm using the spec."""
    lines = ['\n// ============ Re-exported Types ============']
    lines.append('export namespace gn {\n')

    # Basic type aliases
    lines.append('// Basic types')
    for alias in sorted(gm_spec.type_aliases.values(), key=lambda a: a.name):
        lines.append(f'using gm::{alias.name};')

    lines.append('')

    # Handle structs
    handles = [s for s in gm_spec.struct_types.values() if not s.gl_class.startswith('_special_')]
    if handles:
        lines.append('// Handle types')
        for handle in sorted(handles, key=lambda h: h.name):
            lines.append(f'using gm::{handle.name};')
        lines.append('')

    # Special wrappers
    wrappers = [s for s in gm_spec.struct_types.values() if s.gl_class.startswith('_special_')]
    if wrappers:
        lines.append('// Special wrappers')
        for wrapper in sorted(wrappers, key=lambda w: w.name):
            lines.append(f'using gm::{wrapper.name};')
        lines.append('')

    # Special constants
    if gm_spec.enum_constants:
        lines.append('// Special constants')
        for const in sorted(gm_spec.enum_constants.values(), key=lambda c: c.name):
            lines.append(f'using gm::{const.name};')
        lines.append('')

    # Loader
    lines.append('// Loader')
    lines.append('using gm::load;')
    lines.append('using gm::LoadProc;')
    lines.append('using gm::FUNCTION_COUNT;')
    lines.append('using gm::isComplete;')

    lines.append('\n} // namespace gn\n')
    return '\n'.join(lines)


def generate_enum_reexports(gm_spec: ModuleSpec) -> str:
    """Re-export enum classes from gm."""
    lines = ['\n// ============ Re-exported Enum Classes ============']
    lines.append('export namespace gn {\n')

    for enum_class in sorted(gm_spec.enum_classes.values(), key=lambda e: e.name):
        lines.append(f'using gm::{enum_class.name};')

    lines.append('\n} // namespace gn\n')
    return '\n'.join(lines)


def generate_functions(gm_spec: ModuleSpec) -> str:
    """Generate function re-exports and TODO stubs, grouped by category."""

    # Categorize all functions
    categories = defaultdict(list)
    for func in gm_spec.functions.values():
        cat = categorize_function(func.name)
        categories[cat].append(func)

    lines = ['\n// ============ Functions ============']
    lines.append('export namespace gn {\n')

    # Generate each category
    category_order = [cat for cat, _ in CATEGORY_PATTERNS] + ["Other"]

    for category in category_order:
        if category not in categories:
            continue

        funcs = sorted(categories[category], key=lambda f: f.name)

        lines.append(f'// -------- {category} --------')
        lines.append('')

        for func in funcs:
            needs_work, reason = needs_modernization(func)

            if needs_work:
                # Generate inline wrapper with TODO comment
                params_str = ', '.join(f'{p.type} {p.name}' for p in func.params)
                args_str = ', '.join(p.name for p in func.params)

                lines.append(f'// TODO: Modernize ({reason})')
                if func.return_type == 'void':
                    lines.append(f'void {func.name}({params_str}) {{')
                    lines.append(f'    gm::{func.name}({args_str});')
                    lines.append('}')
                else:
                    lines.append(f'{func.return_type} {func.name}({params_str}) {{')
                    lines.append(f'    return gm::{func.name}({args_str});')
                    lines.append('}')
            else:
                # Simple re-export
                lines.append(f'using gm::{func.name};')

        lines.append('')

    lines.append('} // namespace gn\n')
    return '\n'.join(lines)


def generate_footer(gm_spec: ModuleSpec) -> str:
    """Generate statistics."""
    total = len(gm_spec.functions)
    needs_work = sum(1 for f in gm_spec.functions.values() if needs_modernization(f)[0])

    return f'''
// ============ Statistics ============
// Total functions: {total}
// Need modernization: {needs_work}
// Ready to use: {total - needs_work}
'''


def generate(gm_spec: ModuleSpec, registry: GLRegistry) -> str:
    """Generate the complete gn.cppm module."""
    return '\n'.join([
        generate_header(registry),
        generate_type_reexports(gm_spec),
        generate_enum_reexports(gm_spec),
        generate_functions(gm_spec),
        generate_footer(gm_spec),
    ])


# ============ Main ============

def main():
    parser = argparse.ArgumentParser(description='Generate ergonomic C++ OpenGL module from gl.xml')
    parser.add_argument('xml_path', help='Path to gl.xml')
    parser.add_argument('output_path', help='Output .cppm file')
    parser.add_argument('--api', choices=['gl', 'gles2', 'gles1'], default='gl')
    parser.add_argument('--profile', choices=['core', 'compatibility', 'common'], default='core')
    parser.add_argument('--version', default='4.6')

    args = parser.parse_args()

    print(f'Parsing {args.xml_path}...')
    registry = GLRegistry.parse(args.xml_path, args.api, args.version, args.profile)

    print(f'Building gl module spec...')
    gl_spec = build_gl_spec(registry)

    print(f'Building gm module spec...')
    gm_spec = build_gm_spec(registry, gl_spec)

    total = len(gm_spec.functions)
    needs_work = sum(1 for f in gm_spec.functions.values() if needs_modernization(f)[0])

    print(f'  Total functions: {total}')
    print(f'  Need modernization: {needs_work}')
    print(f'  Ready to use: {total - needs_work}')

    print(f'Generating {args.api} {args.version} {args.profile}...')
    output = generate(gm_spec, registry)

    Path(args.output_path).write_text(output)
    print(f'Wrote {args.output_path}')


if __name__ == '__main__':
    main()