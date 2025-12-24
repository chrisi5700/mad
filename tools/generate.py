#!/usr/bin/env python3
"""
OpenGL C++ Module Loader Generator

Generates a C++20 module-based OpenGL loader from gl.xml.
Similar to GLAD but using modules instead of headers.

Usage:
    python generate.py <gl.xml path> <output.cppm path> [--api gl|gles2] [--profile core|compatibility] [--version X.Y]

Example:
    python generate.py gl.xml gl.cppm --api gl --profile core --version 4.6
"""

import argparse
import re
import sys
from dataclasses import dataclass, field
from pathlib import Path
from typing import Optional
from xml.etree import ElementTree as ET


@dataclass
class GLType:
    """Represents an OpenGL type definition."""
    name: str
    definition: str
    requires: Optional[str] = None


@dataclass
class GLEnum:
    """Represents an OpenGL enumeration constant."""
    name: str
    value: str
    groups: list[str] = field(default_factory=list)
    type: Optional[str] = None  # 'bitmask', 'enum', etc.


@dataclass
class GLParam:
    """Represents a function parameter."""
    name: str
    type: str
    const: bool = False
    pointer: bool = False
    pointer_depth: int = 0


@dataclass
class GLCommand:
    """Represents an OpenGL function/command."""
    name: str
    return_type: str
    params: list[GLParam] = field(default_factory=list)
    alias: Optional[str] = None


@dataclass
class GLFeature:
    """Represents an OpenGL version feature set."""
    api: str
    name: str
    number: str
    require_enums: list[str] = field(default_factory=list)
    require_commands: list[str] = field(default_factory=list)
    remove_enums: list[str] = field(default_factory=list)
    remove_commands: list[str] = field(default_factory=list)
    profile: Optional[str] = None


@dataclass
class GLExtension:
    """Represents an OpenGL extension."""
    name: str
    supported: str  # e.g., 'gl', 'gles2', 'gl|gles2'
    require_enums: list[str] = field(default_factory=list)
    require_commands: list[str] = field(default_factory=list)


class GLRegistry:
    """Parser for the OpenGL XML registry (gl.xml)."""

    def __init__(self, xml_path: str):
        self.xml_path = Path(xml_path)
        self.types: dict[str, GLType] = {}
        self.enums: dict[str, GLEnum] = {}
        self.commands: dict[str, GLCommand] = {}
        self.features: list[GLFeature] = []
        self.extensions: dict[str, GLExtension] = {}
        self._parse()

    def _parse(self):
        """Parse the gl.xml file."""
        tree = ET.parse(self.xml_path)
        root = tree.getroot()

        self._parse_types(root)
        self._parse_enums(root)
        self._parse_commands(root)
        self._parse_features(root)
        self._parse_extensions(root)

    def _parse_types(self, root: ET.Element):
        """Parse <types> section."""
        types_elem = root.find('types')
        if types_elem is None:
            return

        for type_elem in types_elem.findall('type'):
            # Note: gl.xml uses <n> but ElementTree parses it as <name>
            name_elem = type_elem.find('name')
            name = type_elem.get('name') or (name_elem.text if name_elem is not None else None)

            if name is None:
                continue

            # Get the full definition text
            definition = self._get_element_text(type_elem)
            requires = type_elem.get('requires')

            self.types[name] = GLType(
                name=name,
                definition=definition,
                requires=requires
            )

    def _parse_enums(self, root: ET.Element):
        """Parse <enums> sections."""
        for enums_elem in root.findall('enums'):
            enum_type = enums_elem.get('type')

            for enum_elem in enums_elem.findall('enum'):
                name = enum_elem.get('name')
                value = enum_elem.get('value')

                if name is None or value is None:
                    continue

                groups = []
                group_attr = enum_elem.get('group')
                if group_attr:
                    groups = group_attr.split(',')

                self.enums[name] = GLEnum(
                    name=name,
                    value=value,
                    groups=groups,
                    type=enum_type
                )

    def _parse_commands(self, root: ET.Element):
        """Parse <commands> section."""
        commands_elem = root.find('commands')
        if commands_elem is None:
            return

        for cmd_elem in commands_elem.findall('command'):
            proto = cmd_elem.find('proto')
            if proto is None:
                continue

            # Parse return type and function name
            name_elem = proto.find('name')
            if name_elem is None:
                continue

            func_name = name_elem.text
            return_type = self._parse_type_from_proto(proto)

            # Parse parameters
            params = []
            for param_elem in cmd_elem.findall('param'):
                param = self._parse_param(param_elem)
                if param:
                    params.append(param)

            # Check for alias
            alias_elem = cmd_elem.find('alias')
            alias = alias_elem.get('name') if alias_elem is not None else None

            self.commands[func_name] = GLCommand(
                name=func_name,
                return_type=return_type,
                params=params,
                alias=alias
            )

    def _parse_type_from_proto(self, proto: ET.Element) -> str:
        """Parse return type from <proto> element."""
        ptype = proto.find('ptype')

        # Get all text content before the name
        text_parts = []
        if proto.text:
            text_parts.append(proto.text.strip())
        if ptype is not None:
            if ptype.text:
                text_parts.append(ptype.text.strip())
            if ptype.tail:
                text_parts.append(ptype.tail.strip())

        return ' '.join(t for t in text_parts if t) or 'void'

    def _parse_param(self, param_elem: ET.Element) -> Optional[GLParam]:
        """Parse a <param> element into a GLParam."""
        name_elem = param_elem.find('name')
        if name_elem is None:
            return None

        param_name = name_elem.text
        ptype = param_elem.find('ptype')

        # Build the type string
        type_parts = []
        is_const = False
        pointer_depth = 0

        # Check for const at the start
        if param_elem.text and 'const' in param_elem.text:
            is_const = True
            type_parts.append('const')

        # Get the type name
        if ptype is not None:
            type_parts.append(ptype.text)
            # Check for pointer after type
            if ptype.tail:
                tail = ptype.tail.strip()
                if tail:
                    # Count pointers
                    pointer_depth = tail.count('*')
                    if 'const' in tail:
                        type_parts.append('const')
        else:
            # Handle "void *" and similar
            if param_elem.text:
                text = param_elem.text.strip()
                if text and text != 'const':
                    # Remove const if we already added it
                    text = text.replace('const', '').strip()
                    if text:
                        type_parts.append(text)

        # Check name tail for more pointers
        if name_elem.tail:
            pointer_depth += name_elem.tail.count('*')

        # Handle special case where type is just "void" for void*
        type_str = ' '.join(type_parts)
        if not type_str or type_str == 'const':
            type_str = 'void'

        return GLParam(
            name=param_name,
            type=type_str,
            const=is_const,
            pointer=pointer_depth > 0,
            pointer_depth=pointer_depth
        )

    def _parse_features(self, root: ET.Element):
        """Parse <feature> sections."""
        for feature_elem in root.findall('feature'):
            api = feature_elem.get('api')
            name = feature_elem.get('name')
            number = feature_elem.get('number')

            if not all([api, name, number]):
                continue

            feature = GLFeature(
                api=api,
                name=name,
                number=number
            )

            for require in feature_elem.findall('require'):
                profile = require.get('profile')

                for enum in require.findall('enum'):
                    enum_name = enum.get('name')
                    if enum_name:
                        feature.require_enums.append(enum_name)

                for cmd in require.findall('command'):
                    cmd_name = cmd.get('name')
                    if cmd_name:
                        feature.require_commands.append(cmd_name)

            for remove in feature_elem.findall('remove'):
                profile = remove.get('profile')

                for enum in remove.findall('enum'):
                    enum_name = enum.get('name')
                    if enum_name:
                        feature.remove_enums.append(enum_name)

                for cmd in remove.findall('command'):
                    cmd_name = cmd.get('name')
                    if cmd_name:
                        feature.remove_commands.append(cmd_name)

            self.features.append(feature)

    def _parse_extensions(self, root: ET.Element):
        """Parse <extensions> section."""
        extensions_elem = root.find('extensions')
        if extensions_elem is None:
            return

        for ext_elem in extensions_elem.findall('extension'):
            name = ext_elem.get('name')
            supported = ext_elem.get('supported', '')

            if not name:
                continue

            ext = GLExtension(
                name=name,
                supported=supported
            )

            for require in ext_elem.findall('require'):
                for enum in require.findall('enum'):
                    enum_name = enum.get('name')
                    if enum_name:
                        ext.require_enums.append(enum_name)

                for cmd in require.findall('command'):
                    cmd_name = cmd.get('name')
                    if cmd_name:
                        ext.require_commands.append(cmd_name)

            self.extensions[name] = ext

    def _get_element_text(self, elem: ET.Element) -> str:
        """Get all text content from an element, including nested elements."""
        text_parts = []
        if elem.text:
            text_parts.append(elem.text)
        for child in elem:
            if child.text:
                text_parts.append(child.text)
            if child.tail:
                text_parts.append(child.tail)
        return ''.join(text_parts)

    def get_features_for_version(self, api: str, version: str, profile: str = 'core') -> tuple[set[str], set[str]]:
        """
        Get all enums and commands required for a specific API version.
        Returns (enums, commands) sets.
        """
        required_enums = set()
        required_commands = set()

        target_major, target_minor = map(int, version.split('.'))
        target_version = target_major * 10 + target_minor

        for feature in self.features:
            if feature.api != api:
                continue

            feat_major, feat_minor = map(int, feature.number.split('.'))
            feat_version = feat_major * 10 + feat_minor

            if feat_version > target_version:
                continue

            # Add required items
            for enum_name in feature.require_enums:
                required_enums.add(enum_name)
            for cmd_name in feature.require_commands:
                required_commands.add(cmd_name)

            # Remove deprecated items (for core profile)
            if profile == 'core':
                for enum_name in feature.remove_enums:
                    required_enums.discard(enum_name)
                for cmd_name in feature.remove_commands:
                    required_commands.discard(cmd_name)

        return required_enums, required_commands


class ModuleGenerator:
    """Generates C++20 module code from the GL registry."""

    # Standard platform-independent type mappings
    KHR_TYPES = {
        'khronos_int8_t': 'std::int8_t',
        'khronos_uint8_t': 'std::uint8_t',
        'khronos_int16_t': 'std::int16_t',
        'khronos_uint16_t': 'std::uint16_t',
        'khronos_int32_t': 'std::int32_t',
        'khronos_uint32_t': 'std::uint32_t',
        'khronos_int64_t': 'std::int64_t',
        'khronos_uint64_t': 'std::uint64_t',
        'khronos_intptr_t': 'std::intptr_t',
        'khronos_uintptr_t': 'std::uintptr_t',
        'khronos_ssize_t': 'std::ptrdiff_t',
        'khronos_usize_t': 'std::size_t',
        'khronos_float_t': 'float',
    }

    def __init__(self, registry: GLRegistry, api: str = 'gl', profile: str = 'core', version: str = '4.6'):
        self.registry = registry
        self.api = api
        self.profile = profile
        self.version = version
        self.required_enums, self.required_commands = registry.get_features_for_version(api, version, profile)

    def generate(self) -> str:
        """Generate the complete C++ module source."""
        parts = [
            self._generate_header(),
            self._generate_module_declaration(),
            self._generate_imports(),
            self._generate_types(),
            self._generate_enums(),
            self._generate_function_pointer_types(),
            self._generate_function_pointers(),
            self._generate_inline_functions(),
            self._generate_loader(),
            self._generate_footer(),
        ]
        return '\n'.join(parts)

    def _generate_header(self) -> str:
        return f'''// OpenGL {self.version} {self.profile.title()} Profile C++ Module
// Auto-generated from gl.xml - Do not edit manually
//
// Usage:
//   import gl;
//   
//   // Initialize (call after creating GL context)
//   gl::load(getProcAddress);  // getProcAddress is platform-specific
//   
//   // Use OpenGL functions
//   gl::ClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//   gl::Clear(gl::COLOR_BUFFER_BIT);
'''

    def _generate_module_declaration(self) -> str:
        return '''
export module gl;
'''

    def _generate_imports(self) -> str:
        return '''
// For C++23 standard library modules, use: import std;
// For C++20/pre-module compilers, use standard includes instead:
#if __cpp_lib_modules >= 202207L
import std;
#else
#include <cstdint>
#include <cstddef>
#endif

// Platform-specific definitions
#if defined(_WIN32)
    #define GL_APIENTRY __stdcall
#else
    #define GL_APIENTRY
#endif

#define GL_APIENTRYP GL_APIENTRY *
'''

    def _generate_types(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Type Definitions',
                 '// =============================================================================\n',
                 'export namespace gl {\n']

        # Basic types that we define directly (avoiding khrplatform.h dependency)
        basic_types = '''
// Basic integer types - using standard types for compatibility
using Enum = unsigned int;
using Boolean = unsigned char;
using Bitfield = unsigned int;
using Byte = signed char;
using Ubyte = unsigned char;
using Short = short;
using Ushort = unsigned short;
using Int = int;
using Uint = unsigned int;
using Clampx = int;
using Sizei = int;
using Float = float;
using Clampf = float;
using Double = double;
using Clampd = double;
using Char = char;
using Half = unsigned short;
using Fixed = int;

// Platform-dependent pointer-sized types
#if defined(_WIN64) || defined(__LP64__) || defined(__x86_64__) || defined(__aarch64__)
using Intptr = long long;
using Sizeiptr = long long;
using Int64 = long long;
using Uint64 = unsigned long long;
#else
using Intptr = int;
using Sizeiptr = int;
using Int64 = long long;
using Uint64 = unsigned long long;
#endif

// Sync object (opaque pointer)
using Sync = struct __GLsync*;

// Callback types
using DebugProc = void (GL_APIENTRY *)(Enum source, Enum type, Uint id, Enum severity, Sizei length, const Char* message, const void* userParam);

// Boolean constants
inline constexpr Boolean TRUE_VALUE = 1;
inline constexpr Boolean FALSE_VALUE = 0;
'''
        lines.append(basic_types)
        lines.append('} // namespace gl\n')

        return '\n'.join(lines)

    def _generate_enums(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Enumerations',
                 '// =============================================================================\n',
                 'export namespace gl {\n']

        # Sort enums for consistent output
        sorted_enums = sorted(self.required_enums)

        for enum_name in sorted_enums:
            if enum_name not in self.registry.enums:
                continue

            enum = self.registry.enums[enum_name]

            # Convert GL_XXX to XXX (strip GL_ prefix)
            cpp_name = enum_name
            if cpp_name.startswith('GL_'):
                cpp_name = cpp_name[3:]

            # Handle negative values and hex values
            value = enum.value
            if value.startswith('0x') or value.startswith('-'):
                # Keep as-is for hex or negative
                pass
            elif value.isdigit():
                # Simple integer
                pass
            else:
                # Some enum values reference other enums
                if value.startswith('GL_'):
                    value = value[3:]

            lines.append(f'inline constexpr Enum {cpp_name} = {value};')

        lines.append('\n} // namespace gl\n')
        return '\n'.join(lines)

    def _generate_function_pointer_types(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Function Pointer Types',
                 '// =============================================================================\n',
                 'export namespace gl {\n', 'namespace detail {\n']

        sorted_commands = sorted(self.required_commands)

        for cmd_name in sorted_commands:
            if cmd_name not in self.registry.commands:
                continue

            cmd = self.registry.commands[cmd_name]
            typedef = self._generate_pfn_typedef(cmd)
            lines.append(typedef)

        lines.append('\n} // namespace detail')
        lines.append('} // namespace gl\n')
        return '\n'.join(lines)

    def _generate_pfn_typedef(self, cmd: GLCommand) -> str:
        """Generate a PFN typedef for a command."""
        return_type = self._translate_type(cmd.return_type)
        params = ', '.join(self._translate_param(p) for p in cmd.params)

        # Strip 'gl' prefix for the type name
        type_name = cmd.name
        if type_name.startswith('gl'):
            type_name = type_name[2:]

        return f'using PFN{type_name.upper()}PROC = {return_type} (GL_APIENTRYP)({params});'

    def _generate_function_pointers(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Function Pointers (Internal)',
                 '// =============================================================================\n',
                 'namespace gl::detail {\n']

        sorted_commands = sorted(self.required_commands)

        for cmd_name in sorted_commands:
            if cmd_name not in self.registry.commands:
                continue

            # Strip 'gl' prefix
            var_name = cmd_name
            if var_name.startswith('gl'):
                var_name = var_name[2:]

            type_name = f'PFN{var_name.upper()}PROC'
            lines.append(f'inline {type_name} ptr{var_name} = nullptr;')

        lines.append('\n} // namespace gl::detail\n')
        return '\n'.join(lines)

    def _generate_inline_functions(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Functions (Exported)',
                 '// =============================================================================\n',
                 'export namespace gl {\n']

        sorted_commands = sorted(self.required_commands)

        for cmd_name in sorted_commands:
            if cmd_name not in self.registry.commands:
                continue

            cmd = self.registry.commands[cmd_name]
            func = self._generate_inline_function(cmd)
            lines.append(func)
            lines.append('')

        lines.append('} // namespace gl\n')
        return '\n'.join(lines)

    def _generate_inline_function(self, cmd: GLCommand) -> str:
        """Generate an inline wrapper function."""
        return_type = self._translate_type(cmd.return_type)

        # Strip 'gl' prefix for function name
        func_name = cmd.name
        if func_name.startswith('gl'):
            func_name = func_name[2:]

        # Generate parameter list for declaration
        params = ', '.join(self._translate_param(p) for p in cmd.params)

        # Generate parameter names for the call
        param_names = ', '.join(p.name for p in cmd.params)

        # Generate the function body
        if return_type == 'void':
            body = f'detail::ptr{func_name}({param_names});'
        else:
            body = f'return detail::ptr{func_name}({param_names});'

        return f'''inline {return_type} {func_name}({params}) {{
    {body}
}}'''

    def _generate_loader(self) -> str:
        lines = ['\n// =============================================================================',
                 '// OpenGL Loader',
                 '// =============================================================================\n',
                 'export namespace gl {\n', '// Function pointer type for loading GL functions',
                 '// This matches the signature of wglGetProcAddress, glXGetProcAddress, etc.',
                 'using LoadProc = void* (*)(const char* name);\n', '// Load all OpenGL functions',
                 '// Returns the number of functions that were successfully loaded',
                 'inline int load(LoadProc loadProc) {', '    int loaded = 0;\n']

        # Loader function type

        # Load function

        sorted_commands = sorted(self.required_commands)

        for cmd_name in sorted_commands:
            if cmd_name not in self.registry.commands:
                continue

            var_name = cmd_name
            if var_name.startswith('gl'):
                var_name = var_name[2:]

            type_name = f'detail::PFN{var_name.upper()}PROC'
            lines.append(f'    detail::ptr{var_name} = reinterpret_cast<{type_name}>(loadProc("{cmd_name}"));')
            lines.append(f'    if (detail::ptr{var_name}) ++loaded;')

        lines.append('')
        lines.append('    return loaded;')
        lines.append('}\n')

        # Get function count
        total = len([c for c in self.required_commands if c in self.registry.commands])
        lines.append(f'// Total number of functions in this GL version')
        lines.append(f'inline constexpr int FUNCTION_COUNT = {total};\n')

        # Check if fully loaded
        lines.append('// Check if all functions were loaded')
        lines.append('inline bool isComplete() {')
        lines.append('    return')

        first = True
        for cmd_name in sorted_commands:
            if cmd_name not in self.registry.commands:
                continue

            var_name = cmd_name
            if var_name.startswith('gl'):
                var_name = var_name[2:]

            if first:
                lines.append(f'        detail::ptr{var_name} != nullptr')
                first = False
            else:
                lines.append(f'        && detail::ptr{var_name} != nullptr')

        lines.append('    ;')
        lines.append('}\n')

        lines.append('} // namespace gl\n')
        return '\n'.join(lines)

    def _generate_footer(self) -> str:
        return f'''
// =============================================================================
// End of OpenGL {self.version} {self.profile.title()} Profile Module
// =============================================================================
'''

    def _translate_type(self, gl_type: str) -> str:
        """Translate GL type to our namespace type."""
        # Clean up the type
        gl_type = gl_type.strip()

        # Handle void
        if gl_type == 'void' or not gl_type:
            return 'void'

        # Handle const
        is_const = 'const' in gl_type
        clean_type = gl_type.replace('const', '').strip()

        # Handle pointers
        pointer_count = clean_type.count('*')
        clean_type = clean_type.replace('*', '').strip()

        # Type mapping
        type_map = {
            'GLenum': 'Enum',
            'GLboolean': 'Boolean',
            'GLbitfield': 'Bitfield',
            'GLvoid': 'void',
            'GLbyte': 'Byte',
            'GLubyte': 'Ubyte',
            'GLshort': 'Short',
            'GLushort': 'Ushort',
            'GLint': 'Int',
            'GLuint': 'Uint',
            'GLclampx': 'Clampx',
            'GLsizei': 'Sizei',
            'GLfloat': 'Float',
            'GLclampf': 'Clampf',
            'GLdouble': 'Double',
            'GLclampd': 'Clampd',
            'GLchar': 'Char',
            'GLcharARB': 'Char',
            'GLhalf': 'Half',
            'GLhalfARB': 'Half',
            'GLfixed': 'Fixed',
            'GLintptr': 'Intptr',
            'GLintptrARB': 'Intptr',
            'GLsizeiptr': 'Sizeiptr',
            'GLsizeiptrARB': 'Sizeiptr',
            'GLint64': 'Int64',
            'GLint64EXT': 'Int64',
            'GLuint64': 'Uint64',
            'GLuint64EXT': 'Uint64',
            'GLsync': 'Sync',
            'GLDEBUGPROC': 'DebugProc',
            'GLDEBUGPROCARB': 'DebugProc',
            'GLDEBUGPROCKHR': 'DebugProc',
            'void': 'void',
        }

        translated = type_map.get(clean_type, clean_type)

        # Reconstruct the type
        result = ''
        if is_const:
            result = 'const '
        result += translated
        result += '*' * pointer_count

        return result

    def _translate_param(self, param: GLParam) -> str:
        """Translate a parameter to C++ syntax."""
        # Build the type
        type_str = self._translate_type(param.type)

        # Add pointers
        type_str += '*' * param.pointer_depth

        return f'{type_str} {param.name}'


def main():
    parser = argparse.ArgumentParser(
        description='Generate C++20 module-based OpenGL loader from gl.xml'
    )
    parser.add_argument('xml_path', help='Path to gl.xml')
    parser.add_argument('output_path', help='Output .cppm file path')
    parser.add_argument('--api', choices=['gl', 'gles2', 'gles1'], default='gl',
                        help='Target API (default: gl)')
    parser.add_argument('--profile', choices=['core', 'compatibility', 'common'], default='core',
                        help='GL profile (default: core)')
    parser.add_argument('--version', default='4.6',
                        help='GL version (default: 4.6)')

    args = parser.parse_args()

    print(f'Parsing {args.xml_path}...')
    registry = GLRegistry(args.xml_path)

    print(f'Generating {args.api} {args.version} {args.profile} profile module...')
    generator = ModuleGenerator(
        registry,
        api=args.api,
        profile=args.profile,
        version=args.version
    )

    output = generator.generate()

    print(f'Writing to {args.output_path}...')
    Path(args.output_path).write_text(output)

    # Print summary
    print(f'\nSummary:')
    print(f'  Enums: {len(generator.required_enums)}')
    print(f'  Commands: {len(generator.required_commands)}')
    print(f'  Output: {args.output_path}')
    print('\nDone!')


if __name__ == '__main__':
    main()