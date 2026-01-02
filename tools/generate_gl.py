#!/usr/bin/env python3
"""
OpenGL gl.cppm Generator

Generates the raw C++ module bindings from gl.xml.
Creates a ModuleSpec describing what gl exports, then generates the code.

Usage:
    python generate_gl.py <gl.xml> <output.cppm> [--api gl|gles2|gles1] [--profile core|compatibility] [--version X.Y]
"""

import argparse
import re
from pathlib import Path
from glxml_parser import GLRegistry, GLType, strip_gl_prefix
from module_spec import ModuleSpec, TypeAlias, EnumConstant, Function, FunctionParam


# ============ Type Definition Parsing ============

# Map khronos types to C++ types
KHRONOS_TYPE_MAP = {
    'khronos_int8_t': 'signed char',
    'khronos_uint8_t': 'unsigned char',
    'khronos_int16_t': 'short',
    'khronos_uint16_t': 'unsigned short',
    'khronos_int32_t': 'int',
    'khronos_uint32_t': 'unsigned int',
    'khronos_float_t': 'float',
    'khronos_intptr_t': 'std::intptr_t',
    'khronos_uintptr_t': 'std::uintptr_t',
    'khronos_ssize_t': 'std::ptrdiff_t',
    'khronos_usize_t': 'std::size_t',
    'khronos_int64_t': 'std::int64_t',
    'khronos_uint64_t': 'std::uint64_t',
}


def get_cpp_name(gl_name: str) -> str:
    """Convert GL type name to C++ name (strip GL prefix, capitalize)."""
    if gl_name == 'void':
        return 'void'
    stripped = strip_gl_prefix(gl_name)
    # Capitalize first letter: "bitfield" -> "Bitfield"
    if stripped and stripped[0].islower():
        return stripped[0].upper() + stripped[1:]
    return stripped


def parse_typedef(definition: str) -> str | None:
    """
    Extract the underlying type from a typedef definition.

    Examples:
        "typedef unsigned int GLenum;" -> "unsigned int"
        "typedef khronos_int8_t GLbyte;" -> "khronos_int8_t"
        "typedef void *GLeglImageOES;" -> "void*"
        "typedef struct __GLsync *GLsync;" -> "struct __GLsync*"
    """
    # Match: typedef <type> <n>;
    match = re.match(r'typedef\s+(.+?)\s+\w+\s*;', definition)
    if match:
        type_part = match.group(1).strip()
        type_part = type_part.replace(' *', '*').replace('* ', '*')
        return type_part

    # Handle pointer typedefs like "typedef void *GLeglImageOES;"
    match = re.match(r'typedef\s+(.+?\*)\s*\w+\s*;', definition)
    if match:
        return match.group(1).strip()

    return None


def is_function_pointer_typedef(definition: str) -> bool:
    """Check if a typedef defines a function pointer."""
    return '(*)' in definition.replace(' ', '') or re.search(r'\([^)]*\*\s*\w+\)', definition) is not None


def parse_function_pointer_typedef(definition: str) -> tuple[str, list[str]] | None:
    """
    Parse a function pointer typedef.

    Example:
        "typedef void ( *GLDEBUGPROC)(GLenum source,GLenum type,...);"
        -> ("void", ["GLenum source", "GLenum type", ...])

    Returns (return_type, [param_with_name, ...]) or None if not a function pointer.
    """
    match = re.match(r'typedef\s+(\w+)\s*\([^)]*\*\s*\w+\)\s*\(([^)]*)\)\s*;', definition)
    if match:
        return_type = match.group(1)
        params_str = match.group(2)
        params = []
        if params_str.strip():
            for param in params_str.split(','):
                params.append(param.strip())
        return (return_type, params)
    return None


def translate_fn_ptr_param(param: str) -> str:
    """
    Translate a function pointer parameter like "GLenum source" to "Enum source".
    Handles: "const GLchar *message" -> "const Char* message"
    """
    if '*' in param:
        # Handle pointers: "const GLchar *message" or "void *userParam"
        parts = param.replace('*', ' * ').split()
        result_parts = []
        for part in parts:
            if part == '*':
                result_parts.append('*')
            elif part == 'const':
                result_parts.append('const')
            elif part.startswith('GL'):
                result_parts.append(get_cpp_name(part))
            else:
                result_parts.append(part)
        return ' '.join(result_parts).replace(' *', '*').replace('* ', '* ')
    else:
        # Simple case: "GLenum source" -> "Enum source"
        parts = param.split()
        result_parts = []
        for part in parts:
            if part == 'const':
                result_parts.append('const')
            elif part.startswith('GL'):
                result_parts.append(get_cpp_name(part))
            else:
                result_parts.append(part)
        return ' '.join(result_parts)


def resolve_type(raw_type: str) -> str:
    """Resolve khronos types and GL type references to standard C++ types."""
    result = raw_type

    # First resolve khronos types
    for khronos, cpp in KHRONOS_TYPE_MAP.items():
        result = result.replace(khronos, cpp)

    # Then resolve GL type references (like GLintptr -> Intptr)
    # Match GLsomething that isn't followed by more alphanumerics
    def replace_gl_type(match):
        gl_type = match.group(0)
        return get_cpp_name(gl_type)

    result = re.sub(r'\bGL[a-z][a-zA-Z0-9]*\b', replace_gl_type, result)

    return result


# ============ ModuleSpec Building ============

def build_gl_spec(registry: GLRegistry) -> ModuleSpec:
    """Build a ModuleSpec describing what gl.cppm will export."""
    spec = ModuleSpec(name="gl")

    # First pass: build basic type aliases (non-function-pointer)
    for gl_type in registry.get_sorted_types():
        if is_function_pointer_typedef(gl_type.definition):
            continue

        raw_def = parse_typedef(gl_type.definition)
        if raw_def is None:
            continue

        cpp_name = get_cpp_name(gl_type.name)
        resolved_def = resolve_type(raw_def)

        if cpp_name == 'void':
            continue

        spec.type_aliases[cpp_name] = TypeAlias(
            name=cpp_name,
            definition=resolved_def,
            gl_name=gl_type.name
        )

    # Add void explicitly for function returns
    spec.type_aliases['void'] = TypeAlias(
        name='void',
        definition='void',
        gl_name='void'
    )

    # Second pass: function pointer types (now we can translate param types)
    for gl_type in registry.get_sorted_types():
        if not is_function_pointer_typedef(gl_type.definition):
            continue

        fn_ptr = parse_function_pointer_typedef(gl_type.definition)
        if fn_ptr is None:
            continue

        return_type, params = fn_ptr
        cpp_name = get_cpp_name(gl_type.name)

        # Translate return type and params
        translated_return = get_cpp_name(return_type) if return_type != 'void' else 'void'
        translated_params = [translate_fn_ptr_param(p) for p in params]

        param_str = ', '.join(translated_params) if translated_params else ''
        definition = f'{translated_return} (GL_APIENTRY*)({param_str})'

        spec.type_aliases[cpp_name] = TypeAlias(
            name=cpp_name,
            definition=definition,
            gl_name=gl_type.name
        )

    # Process enums
    for gl_enum in registry.get_sorted_enums():
        cpp_name = strip_gl_prefix(gl_enum.name)

        spec.enum_constants[cpp_name] = EnumConstant(
            name=cpp_name,
            value=gl_enum.value,
            gl_name=gl_enum.name,
            groups=gl_enum.groups.copy()
        )

    # Process commands
    for gl_cmd in registry.get_sorted_commands():
        cpp_name = strip_gl_prefix(gl_cmd.name)
        return_type = translate_type(gl_cmd.return_type, spec)

        params = []
        for p in gl_cmd.params:
            param_type = translate_type(p.type, spec)
            params.append(FunctionParam(name=p.name, type=param_type))

        spec.functions[cpp_name] = Function(
            name=cpp_name,
            return_type=return_type,
            params=params,
            gl_name=gl_cmd.name
        )

    return spec


def translate_type(gl_type: str, spec: ModuleSpec) -> str:
    """
    Translate a GL type string to our C++ type string.

    Examples:
        "GLenum" -> "Enum"
        "const GLfloat*" -> "const Float*"
        "void" -> "void"
    """
    is_const = 'const' in gl_type
    clean = gl_type.replace('const', '').strip()
    ptr_count = clean.count('*')
    clean = clean.replace('*', '').strip()

    # Look up the base type
    cpp_name = spec.get_type_cpp_name(clean)
    if cpp_name is None:
        # Try get_cpp_name directly
        cpp_name = get_cpp_name(clean)

    result = 'const ' if is_const else ''
    result += cpp_name
    result += '*' * ptr_count
    return result


# ============ Code Generation ============

def generate_header(spec: ModuleSpec, registry: GLRegistry) -> str:
    return f'''// Auto-generated OpenGL module - do not edit
// OpenGL {registry.version} {registry.profile.title()} Profile

export module gl;

#include <cstdint>
#include <cstddef>

#if defined(_WIN32)
    #define GL_APIENTRY __stdcall
#else
    #define GL_APIENTRY
#endif
'''


def generate_types(spec: ModuleSpec) -> str:
    """Generate type alias definitions."""
    lines = ['\nexport namespace gl {\n']

    # Priority ordering for common types
    priority_types = ['Enum', 'Boolean', 'Bitfield', 'Byte', 'Ubyte', 'Short', 'Ushort',
                      'Int', 'Uint', 'Sizei', 'Float', 'Clampf', 'Double', 'Clampd',
                      'Char', 'Half', 'Fixed', 'Intptr', 'Sizeiptr', 'Int64', 'Uint64',
                      'Sync', 'DebugProc']

    def sort_key(alias: TypeAlias) -> tuple:
        try:
            idx = priority_types.index(alias.name)
        except ValueError:
            idx = 999
        return (idx, alias.name)

    sorted_aliases = sorted(spec.type_aliases.values(), key=sort_key)

    for alias in sorted_aliases:
        if alias.name == 'void' or alias.name == 'Void':
            continue
        lines.append(f'using {alias.name} = {alias.definition};')


    lines.append('\n} // namespace gl\n')
    return '\n'.join(lines)


def generate_enums(spec: ModuleSpec) -> str:
    """Generate enum constants."""
    lines = ['\nexport namespace gl {\n']

    for const in sorted(spec.enum_constants.values(), key=lambda c: c.name):
        value = const.value
        if isinstance(value, str) and value.startswith('GL_'):
            value = strip_gl_prefix(value)
        lines.append(f'constexpr Enum {const.name} = {value};')

    lines.append('\n} // namespace gl\n')
    return '\n'.join(lines)


def generate_function_pointer_types(spec: ModuleSpec) -> str:
    """Generate function pointer typedefs (module-private)."""
    lines = ['\nnamespace gl::impl {\n']

    for func in sorted(spec.functions.values(), key=lambda f: f.name):
        params = ', '.join(p.type for p in func.params)
        lines.append(f'using PFN_{func.name} = {func.return_type} (GL_APIENTRY*)({params});')

    lines.append('\n} // namespace gl::impl\n')
    return '\n'.join(lines)


def generate_function_pointers(spec: ModuleSpec) -> str:
    """Generate function pointer storage (module-private)."""
    lines = ['\nnamespace gl::impl {\n']

    for func in sorted(spec.functions.values(), key=lambda f: f.name):
        lines.append(f'PFN_{func.name} ptr_{func.name} = nullptr;')

    lines.append('\n} // namespace gl::impl\n')
    return '\n'.join(lines)


def generate_functions(spec: ModuleSpec) -> str:
    """Generate exported wrapper functions."""
    lines = ['\nexport namespace gl {\n']

    for func in sorted(spec.functions.values(), key=lambda f: f.name):
        params_with_names = ', '.join(f'{p.type} {p.name}' for p in func.params)
        args = ', '.join(p.name for p in func.params)
        call = f'impl::ptr_{func.name}({args})'

        if func.return_type == 'void':
            body = f'{call};'
        else:
            body = f'return {call};'

        lines.append(f'{func.return_type} {func.name}({params_with_names}) {{ {body} }}')

    lines.append('\n} // namespace gl\n')
    return '\n'.join(lines)


def generate_loader(spec: ModuleSpec) -> str:
    """Generate the loader function."""
    functions = sorted(spec.functions.values(), key=lambda f: f.name)

    lines = ['\nexport namespace gl {\n']
    lines.append('using LoadProc = void* (*)(const char*);')
    lines.append('')
    lines.append('int load(LoadProc loadProc) {')
    lines.append('    int loaded = 0;')

    for func in functions:
        lines.append(f'    impl::ptr_{func.name} = reinterpret_cast<impl::PFN_{func.name}>(loadProc("{func.gl_name}"));')
        lines.append(f'    if (impl::ptr_{func.name}) ++loaded;')

    lines.append('    return loaded;')
    lines.append('}')
    lines.append('')
    lines.append(f'constexpr int FUNCTION_COUNT = {len(functions)};')
    lines.append('')
    lines.append('bool isComplete() {')

    if functions:
        checks = [f'impl::ptr_{f.name} != nullptr' for f in functions]
        lines.append('    return ' + checks[0])
        for check in checks[1:]:
            lines.append(f'        && {check}')
        lines.append('    ;')
    else:
        lines.append('    return true;')

    lines.append('}')
    lines.append('\n} // namespace gl')
    return '\n'.join(lines)


def generate(spec: ModuleSpec, registry: GLRegistry) -> str:
    """Generate the complete gl.cppm module."""
    return '\n'.join([
        generate_header(spec, registry),
        generate_types(spec),
        generate_enums(spec),
        generate_function_pointer_types(spec),
        generate_function_pointers(spec),
        generate_functions(spec),
        generate_loader(spec),
    ])


# ============ Main ============

def main():
    parser = argparse.ArgumentParser(description='Generate C++ OpenGL module from gl.xml')
    parser.add_argument('xml_path', help='Path to gl.xml')
    parser.add_argument('output_path', help='Output .cppm file')
    parser.add_argument('--api', choices=['gl', 'gles2', 'gles1'], default='gl')
    parser.add_argument('--profile', choices=['core', 'compatibility', 'common'], default='core')
    parser.add_argument('--version', default='4.6')

    args = parser.parse_args()

    print(f'Parsing {args.xml_path}...')
    registry = GLRegistry.parse(args.xml_path, args.api, args.version, args.profile)

    print(f'Building module spec...')
    spec = build_gl_spec(registry)

    print(f'  Types: {len(spec.type_aliases)}')
    print(f'  Enum constants: {len(spec.enum_constants)}')
    print(f'  Functions: {len(spec.functions)}')

    print(f'Generating {args.api} {args.version} {args.profile}...')
    output = generate(spec, registry)

    Path(args.output_path).write_text(output)
    print(f'Wrote {args.output_path}')


if __name__ == '__main__':
    main()