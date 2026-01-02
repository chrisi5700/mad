#!/usr/bin/env python3
"""
OpenGL gm.cppm Generator

Generates type-safe C++ module bindings from gl.xml.
Creates handle structs, enum classes, and typed function wrappers.

Usage:
    python generate_gm.py <gl.xml> <output.cppm> [--api gl|gles2|gles1] [--profile core|compatibility] [--version X.Y]
"""

import argparse
from pathlib import Path
from glxml_parser import GLRegistry, strip_gl_prefix, to_pascal_case
from module_spec import ModuleSpec, TypeAlias, StructType, EnumConstant, EnumClass, Function, FunctionParam

# Import gl spec builder to know what gl:: exports
from generate_gl import build_gl_spec, get_cpp_name


# ============ Configuration ============

# Enum groups that collide with handle types or need renaming
ENUM_RENAMES = {
    "Buffer": "BufferType",
    "Sampler": "SamplerType",
    "Shader": "ShaderType",
    "StencilOp": "StencilOpType",
}

# Special wrapper types for implementation-defined opaque values
SPECIAL_WRAPPER_TYPES = {
    "ProgramBinaryFormat": "Enum",
}

# Map (function_name, param_name) -> special wrapper type
PARAM_SPECIAL_TYPES = {
    ("GetProgramBinary", "binaryFormat"): "ProgramBinaryFormat",
    ("ProgramBinary", "binaryFormat"): "ProgramBinaryFormat",
}


# ============ ModuleSpec Building ============

def build_gm_spec(registry: GLRegistry, gl_spec: ModuleSpec) -> ModuleSpec:
    """Build a ModuleSpec describing what gm.cppm will export."""
    spec = ModuleSpec(name="gm")

    # Build handle structs first so we know what names to avoid
    handle_names = set()
    for handle in registry.get_sorted_handle_classes():
        cpp_name = to_pascal_case(handle.name)
        underlying = get_cpp_name(handle.underlying_type)
        handle_names.add(cpp_name)

        spec.struct_types[cpp_name] = StructType(
            name=cpp_name,
            underlying_type=underlying,
            gl_class=handle.name
        )

    # Re-export basic types from gl (except Enum and types that collide with handles)
    basic_types = ['Boolean', 'Bitfield', 'Byte', 'Ubyte', 'Short', 'Ushort',
                   'Int', 'Uint', 'Sizei', 'Float', 'Clampf', 'Double', 'Clampd',
                   'Char', 'Half', 'Fixed', 'Intptr', 'Sizeiptr', 'Int64', 'Uint64',
                   'DebugProc']

    for type_name in basic_types:
        # Skip if this would collide with a handle struct
        if type_name in handle_names:
            continue
        if type_name in gl_spec.type_aliases:
            gl_alias = gl_spec.type_aliases[type_name]
            spec.type_aliases[type_name] = TypeAlias(
                name=type_name,
                definition=f'gl::{type_name}',
                gl_name=gl_alias.gl_name
            )

    # Build special wrapper types
    for wrapper_name, underlying in SPECIAL_WRAPPER_TYPES.items():
        spec.struct_types[wrapper_name] = StructType(
            name=wrapper_name,
            underlying_type=underlying,
            gl_class=f"_special_{wrapper_name}"
        )

    # Build enum classes from groups used in commands
    for group_name in sorted(registry.command_referenced_groups):
        if group_name not in registry.enum_groups:
            continue

        group = registry.enum_groups[group_name]
        cpp_name = ENUM_RENAMES.get(group_name, to_pascal_case(group_name))

        # Build values list: (cpp_name, value, gl_name)
        values = []
        seen_values = set()
        for enum in sorted(group.enums, key=lambda e: e.name):
            if enum.value in seen_values:
                continue
            seen_values.add(enum.value)

            enum_cpp_name = to_pascal_case(strip_gl_prefix(enum.name))
            values.append((enum_cpp_name, enum.value, enum.name))

        spec.enum_classes[cpp_name] = EnumClass(
            name=cpp_name,
            gl_group=group_name,
            underlying_type='gl::Enum',
            values=values
        )

    # Export SpecialNumbers as constants (TRUE, FALSE, NONE, etc.)
    if 'SpecialNumbers' in registry.enum_groups:
        for enum in registry.enum_groups['SpecialNumbers'].enums:
            cpp_name = strip_gl_prefix(enum.name)
            spec.enum_constants[cpp_name] = EnumConstant(
                name=cpp_name,
                value=enum.value,
                gl_name=enum.name,
                groups=enum.groups.copy()
            )

    # Build typed functions
    for gl_cmd in registry.get_sorted_commands():
        cpp_name = strip_gl_prefix(gl_cmd.name)

        # Determine return type
        return_type = get_typed_return(gl_cmd, registry, spec)

        # Determine param types
        params = []
        for p in gl_cmd.params:
            param_type = get_typed_param(cpp_name, p, registry, spec, gl_spec)
            params.append(FunctionParam(name=p.name, type=param_type))

        spec.functions[cpp_name] = Function(
            name=cpp_name,
            return_type=return_type,
            params=params,
            gl_name=gl_cmd.name,
            return_handle_class=gl_cmd.return_class,
            return_enum_group=gl_cmd.return_group
        )

    return spec


def get_typed_return(cmd, registry: GLRegistry, spec: ModuleSpec) -> str:
    """Get typed return type for a command."""
    # Handle class return
    if cmd.return_class and cmd.return_class in registry.handle_classes:
        return to_pascal_case(cmd.return_class)

    # Enum group return
    if cmd.return_group and cmd.return_group in registry.command_referenced_groups:
        return ENUM_RENAMES.get(cmd.return_group, to_pascal_case(cmd.return_group))

    # Plain type - parse and reconstruct properly
    is_const = 'const' in cmd.return_type
    clean = cmd.return_type.replace('const', '').strip()
    ptr_count = clean.count('*')
    base_type = clean.replace('*', '').strip()

    # Handle void specially (keep lowercase)
    if base_type == 'void':
        cpp_type = 'void'
    else:
        cpp_type = get_cpp_name(base_type)

    result = 'const ' if is_const else ''
    result += cpp_type
    result += '*' * ptr_count
    return result


def get_typed_param(func_name: str, param, registry: GLRegistry, spec: ModuleSpec, gl_spec: ModuleSpec) -> str:
    """Get typed parameter type."""
    # Check for special type override
    special_key = (func_name, param.name)
    if special_key in PARAM_SPECIAL_TYPES:
        special_type = PARAM_SPECIAL_TYPES[special_key]
        if param.pointer_depth > 0:
            const = 'const ' if param.is_const else ''
            return f'{const}{special_type}' + '*' * param.pointer_depth
        return special_type

    # Handle class
    if param.class_attr and param.class_attr in registry.handle_classes:
        handle_cpp = to_pascal_case(param.class_attr)
        if param.pointer_depth > 0:
            const = 'const ' if param.is_const else ''
            return f'{const}{handle_cpp}' + '*' * param.pointer_depth
        return handle_cpp

    # Enum group
    if param.group_attr and param.group_attr in registry.command_referenced_groups:
        group_cpp = ENUM_RENAMES.get(param.group_attr, to_pascal_case(param.group_attr))
        if param.pointer_depth > 0:
            const = 'const ' if param.is_const else ''
            return f'{const}{group_cpp}' + '*' * param.pointer_depth
        return group_cpp

    # Plain type - translate GL types but keep void lowercase
    base_type = param.type.replace('const', '').replace('*', '').strip()
    if base_type == 'void':
        cpp_type = 'void'
    else:
        cpp_type = get_cpp_name(base_type)

    const = 'const ' if param.is_const else ''
    return f'{const}{cpp_type}' + '*' * param.pointer_depth


# ============ Code Generation ============

def generate_header(spec: ModuleSpec, registry: GLRegistry) -> str:
    return f'''// Auto-generated typed OpenGL module - do not edit
// OpenGL {registry.version} {registry.profile.title()} Profile

export module gm;

import gl;
'''


def generate_type_reexports(spec: ModuleSpec) -> str:
    """Generate type re-exports from gl."""
    lines = ['\n// ============ Re-exported Types ============']
    lines.append('export namespace gm {\n')

    for alias in sorted(spec.type_aliases.values(), key=lambda a: a.name):
        lines.append(f'using {alias.name} = {alias.definition};')

    lines.append('\n} // namespace gm\n')
    return '\n'.join(lines)


def generate_special_wrappers(spec: ModuleSpec) -> str:
    """Generate special wrapper structs."""
    wrappers = [s for s in spec.struct_types.values() if s.gl_class.startswith('_special_')]
    if not wrappers:
        return ''

    lines = ['\n// ============ Special Wrapper Types ============']
    lines.append('export namespace gm {\n')

    for wrapper in sorted(wrappers, key=lambda w: w.name):
        lines.append(f'''struct {wrapper.name} {{
    gl::{wrapper.underlying_type} value{{}};
}};
''')

    lines.append('} // namespace gm\n')
    return '\n'.join(lines)


def generate_handle_structs(spec: ModuleSpec) -> str:
    """Generate handle structs."""
    handles = [s for s in spec.struct_types.values() if not s.gl_class.startswith('_special_')]
    if not handles:
        return ''

    lines = ['\n// ============ Handle Types ============']
    lines.append('export namespace gm {\n')

    for handle in sorted(handles, key=lambda h: h.name):
        lines.append(f'''struct {handle.name} {{
    gl::{handle.underlying_type} handle{{}};
    
    explicit operator gl::{handle.underlying_type}() const {{ return handle; }}
    explicit operator bool() const {{ return handle != 0; }}
    bool operator==(const {handle.name}&) const = default;
}};
''')

    lines.append('} // namespace gm\n')
    return '\n'.join(lines)


def generate_enum_classes(spec: ModuleSpec) -> str:
    """Generate enum classes."""
    if not spec.enum_classes:
        return ''

    lines = ['\n// ============ Enum Classes ============']
    lines.append('export namespace gm {\n')

    for enum_class in sorted(spec.enum_classes.values(), key=lambda e: e.name):
        lines.append(f'enum class {enum_class.name} : gl::Enum {{')

        for cpp_name, value, gl_name in enum_class.values:
            # Use gl:: constant reference
            gl_const = strip_gl_prefix(gl_name)
            lines.append(f'    {cpp_name} = gl::{gl_const},')

        lines.append('};\n')

    lines.append('} // namespace gm\n')
    return '\n'.join(lines)


def generate_constants(spec: ModuleSpec) -> str:
    """Generate special constants (SpecialNumbers)."""
    if not spec.enum_constants:
        return ''

    lines = ['\n// ============ Special Constants ============']
    lines.append('export namespace gm {\n')

    for const in sorted(spec.enum_constants.values(), key=lambda c: c.name):
        lines.append(f'constexpr gl::Enum {const.name} = gl::{const.name};')

    lines.append('\n} // namespace gm\n')
    return '\n'.join(lines)


def generate_functions(spec: ModuleSpec, registry: GLRegistry) -> str:
    """Generate typed wrapper functions."""
    lines = ['\n// ============ Functions ============']
    lines.append('export namespace gm {\n')

    # Separate into wrapped and re-exported
    wrapped = []
    reexported = []

    for func in sorted(spec.functions.values(), key=lambda f: f.name):
        if needs_wrapping(func, spec):
            wrapped.append(func)
        else:
            reexported.append(func)

    # Re-exported functions
    if reexported:
        lines.append('// Re-exported (no type transformation needed)')
        for func in reexported:
            lines.append(f'using gl::{func.name};')
        lines.append('')

    # Wrapped functions
    if wrapped:
        lines.append('// Wrapped functions with type safety')
        for func in wrapped:
            lines.append(generate_wrapped_function(func, spec, registry))

    lines.append('\n} // namespace gm\n')
    return '\n'.join(lines)


def needs_wrapping(func: Function, spec: ModuleSpec) -> bool:
    """Check if function needs wrapping or can be re-exported."""
    # Has handle return type
    if func.return_handle_class:
        return True

    # Has enum return type
    if func.return_enum_group:
        return True

    # Check params for handles or enums
    for p in func.params:
        # Check if type is a handle
        if p.type.replace('const ', '').replace('*', '').strip() in spec.struct_types:
            return True
        # Check if type is an enum class
        if p.type.replace('const ', '').replace('*', '').strip() in spec.enum_classes:
            return True

    return False


def generate_wrapped_function(func: Function, spec: ModuleSpec, registry: GLRegistry) -> str:
    """Generate a single wrapped function."""
    # Build parameter list
    params_str = ', '.join(f'{p.type} {p.name}' for p in func.params)

    # Build argument conversion
    args = []
    for p in func.params:
        args.append(get_param_conversion(p, spec))
    args_str = ', '.join(args)

    # Build call
    call = f'gl::{func.name}({args_str})'

    # Build return conversion
    if func.return_type == 'void':
        body = f'{call};'
    elif func.return_handle_class:
        body = f'return {func.return_type}{{ {call} }};'
    elif func.return_enum_group:
        body = f'return static_cast<{func.return_type}>({call});'
    else:
        body = f'return {call};'

    return f'{func.return_type} {func.name}({params_str}) {{ {body} }}\n'


def get_param_conversion(param: FunctionParam, spec: ModuleSpec) -> str:
    """Get expression to convert typed param to gl call."""
    base_type = param.type.replace('const ', '').replace('*', '').strip()

    # Handle struct (including special wrappers)
    if base_type in spec.struct_types:
        struct = spec.struct_types[base_type]
        if struct.gl_class.startswith('_special_'):
            # Special wrapper - use .value
            if '*' in param.type:
                const = 'const ' if 'const' in param.type else ''
                return f'reinterpret_cast<{const}gl::{struct.underlying_type}*>({param.name})'
            return f'{param.name}.value'
        else:
            # Handle struct - use .handle
            if '*' in param.type:
                const = 'const ' if 'const' in param.type else ''
                return f'reinterpret_cast<{const}gl::{struct.underlying_type}*>({param.name})'
            return f'{param.name}.handle'

    # Enum class
    if base_type in spec.enum_classes:
        if '*' in param.type:
            const = 'const ' if 'const' in param.type else ''
            return f'reinterpret_cast<{const}gl::Enum*>({param.name})'
        return f'static_cast<gl::Enum>({param.name})'

    # Plain type
    return param.name


def generate_loader(spec: ModuleSpec) -> str:
    """Re-export loader from gl."""
    return '''
// ============ Loader ============
export namespace gm {

using gl::load;
using gl::LoadProc;
using gl::FUNCTION_COUNT;
using gl::isComplete;

} // namespace gm
'''


def generate_footer(spec: ModuleSpec) -> str:
    """Generate statistics comment."""
    handles = [s for s in spec.struct_types.values() if not s.gl_class.startswith('_special_')]
    wrappers = [s for s in spec.struct_types.values() if s.gl_class.startswith('_special_')]
    wrapped = sum(1 for f in spec.functions.values() if needs_wrapping(f, spec))
    reexported = len(spec.functions) - wrapped

    return f'''
// ============ Statistics ============
// Handle types: {len(handles)}
// Special wrappers: {len(wrappers)}
// Enum classes: {len(spec.enum_classes)}
// Special constants: {len(spec.enum_constants)}
// Functions wrapped: {wrapped}
// Functions re-exported: {reexported}
'''


def generate(spec: ModuleSpec, registry: GLRegistry) -> str:
    """Generate the complete gm.cppm module."""
    return '\n'.join([
        generate_header(spec, registry),
        generate_type_reexports(spec),
        generate_special_wrappers(spec),
        generate_handle_structs(spec),
        generate_enum_classes(spec),
        generate_constants(spec),
        generate_functions(spec, registry),
        generate_loader(spec),
        generate_footer(spec),
    ])


# ============ Main ============

def main():
    parser = argparse.ArgumentParser(description='Generate typed C++ OpenGL module from gl.xml')
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
    spec = build_gm_spec(registry, gl_spec)

    handles = [s for s in spec.struct_types.values() if not s.gl_class.startswith('_special_')]
    print(f'  Handle types: {len(handles)}')
    print(f'  Enum classes: {len(spec.enum_classes)}')
    print(f'  Special constants: {len(spec.enum_constants)}')
    print(f'  Functions: {len(spec.functions)}')

    print(f'Generating {args.api} {args.version} {args.profile}...')
    output = generate(spec, registry)

    Path(args.output_path).write_text(output)
    print(f'Wrote {args.output_path}')


if __name__ == '__main__':
    main()