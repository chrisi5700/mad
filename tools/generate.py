#!/usr/bin/env python3
"""
OpenGL C++ Module Generator

Generates a C++23 module-based OpenGL loader from gl.xml.

Usage:
    python generate.py <gl.xml> <output.cppm> [--api gl|gles2|gles1] [--profile core|compatibility] [--version X.Y]
"""

import argparse
from dataclasses import dataclass, field
from pathlib import Path
from xml.etree import ElementTree as ET


@dataclass
class GLEnum:
    name: str
    value: str


@dataclass
class GLParam:
    name: str
    type: str
    pointer_depth: int = 0


@dataclass
class GLCommand:
    name: str
    return_type: str
    params: list[GLParam] = field(default_factory=list)


class GLRegistry:
    """Parses gl.xml and extracts types, enums, and commands for a specific version."""

    def __init__(self, xml_path: str, api: str, version: str, profile: str):
        tree = ET.parse(xml_path)
        root = tree.getroot()

        # Collect what's required for this version
        required_enum_names, required_command_names = self._collect_requirements(
            root, api, version, profile
        )

        # Parse only what we need, already sorted
        self.enums = self._parse_enums(root, required_enum_names)
        self.commands = self._parse_commands(root, required_command_names)

    def _collect_requirements(
            self, root: ET.Element, api: str, version: str, profile: str
    ) -> tuple[set[str], set[str]]:
        """Walk through <feature> elements and collect required enums/commands."""
        target = tuple(map(int, version.split('.')))
        enums: set[str] = set()
        commands: set[str] = set()
        removed_enums: set[str] = set()
        removed_commands: set[str] = set()

        for feature in root.findall('feature'):
            if feature.get('api') != api:
                continue

            feat_version = tuple(map(int, feature.get('number', '0.0').split('.')))
            if feat_version > target:
                continue

            for require in feature.findall('require'):
                req_profile = require.get('profile')
                if req_profile and req_profile != profile:
                    continue

                for enum in require.findall('enum'):
                    name = enum.get('name')
                    if name:
                        enums.add(name)

                for cmd in require.findall('command'):
                    name = cmd.get('name')
                    if name:
                        commands.add(name)

            for remove in feature.findall('remove'):
                rem_profile = remove.get('profile')
                if rem_profile and rem_profile != profile:
                    continue

                for enum in remove.findall('enum'):
                    name = enum.get('name')
                    if name:
                        removed_enums.add(name)

                for cmd in remove.findall('command'):
                    name = cmd.get('name')
                    if name:
                        removed_commands.add(name)

        return enums - removed_enums, commands - removed_commands

    def _parse_enums(self, root: ET.Element, required: set[str]) -> list[GLEnum]:
        """Parse only the enums we need, return sorted list."""
        result = []
        for enums_elem in root.findall('enums'):
            for enum_elem in enums_elem.findall('enum'):
                name = enum_elem.get('name')
                value = enum_elem.get('value')
                if name in required and value:
                    result.append(GLEnum(name=name, value=value))
        return sorted(result, key=lambda e: e.name)

    def _parse_commands(self, root: ET.Element, required: set[str]) -> list[GLCommand]:
        """Parse only the commands we need, return sorted list."""
        commands_elem = root.find('commands')
        if commands_elem is None:
            return []

        result = []
        for cmd_elem in commands_elem.findall('command'):
            proto = cmd_elem.find('proto')
            if proto is None:
                continue

            name_elem = proto.find('name')
            if name_elem is None or name_elem.text not in required:
                continue

            name = name_elem.text
            return_type = self._parse_return_type(proto)
            params = [self._parse_param(p) for p in cmd_elem.findall('param')]

            result.append(GLCommand(name=name, return_type=return_type, params=params))

        return sorted(result, key=lambda c: c.name)

    def _parse_return_type(self, proto: ET.Element) -> str:
        ptype = proto.find('ptype')
        parts = []
        if proto.text:
            parts.append(proto.text.strip())
        if ptype is not None:
            if ptype.text:
                parts.append(ptype.text.strip())
            if ptype.tail:
                parts.append(ptype.tail.strip())
        return ' '.join(p for p in parts if p) or 'void'

    def _parse_param(self, param_elem: ET.Element) -> GLParam:
        name_elem = param_elem.find('name')
        name = name_elem.text if name_elem is not None else ''

        ptype = param_elem.find('ptype')
        type_parts = []
        pointer_depth = 0

        if param_elem.text:
            text = param_elem.text.strip()
            if text:
                type_parts.append(text)
                pointer_depth += text.count('*')

        if ptype is not None:
            if ptype.text:
                type_parts.append(ptype.text.strip())
            if ptype.tail:
                tail = ptype.tail.strip()
                if tail:
                    type_parts.append(tail)
                    pointer_depth += tail.count('*')

        type_str = ' '.join(type_parts).replace(' *', '*').replace('* ', '*')
        # Remove pointer chars from type string since we track depth separately
        type_str = type_str.replace('*', '').strip()

        return GLParam(name=name, type=type_str, pointer_depth=pointer_depth)


class ModuleGenerator:
    """Generates the C++ module from parsed registry data."""

    # GL type -> our type
    TYPE_MAP = {
        'GLenum': 'Enum', 'GLboolean': 'Boolean', 'GLbitfield': 'Bitfield',
        'GLvoid': 'void', 'GLbyte': 'Byte', 'GLubyte': 'Ubyte',
        'GLshort': 'Short', 'GLushort': 'Ushort', 'GLint': 'Int',
        'GLuint': 'Uint', 'GLsizei': 'Sizei', 'GLfloat': 'Float',
        'GLclampf': 'Clampf', 'GLdouble': 'Double', 'GLclampd': 'Clampd',
        'GLchar': 'Char', 'GLhalf': 'Half', 'GLfixed': 'Fixed',
        'GLintptr': 'Intptr', 'GLsizeiptr': 'Sizeiptr', 'GLint64': 'Int64',
        'GLuint64': 'Uint64', 'GLsync': 'Sync', 'GLDEBUGPROC': 'DebugProc',
        'GLcharARB': 'Char', 'GLhalfARB': 'Half', 'GLintptrARB': 'Intptr',
        'GLsizeiptrARB': 'Sizeiptr', 'GLint64EXT': 'Int64', 'GLuint64EXT': 'Uint64',
        'GLDEBUGPROCARB': 'DebugProc', 'GLDEBUGPROCKHR': 'DebugProc',
        'GLclampx': 'Clampx', 'GLeglImageOES': 'EglImageOES',
        'GLeglClientBufferEXT': 'EglClientBufferEXT', 'GLhandleARB': 'HandleARB',
        'void': 'void',
    }

    def __init__(self, registry: GLRegistry, api: str, version: str, profile: str):
        self.enums = registry.enums
        self.commands = registry.commands
        self.header_comment = f'// OpenGL {version} {profile.title()} Profile'

    def generate(self) -> str:
        return '\n'.join([
            self._header(),
            self._types(),
            self._enums(),
            self._function_pointer_types(),
            self._function_pointers(),
            self._inline_functions(),
            self._loader(),
        ])

    def _header(self) -> str:
        return f'''// Auto-generated OpenGL module - do not edit
{self.header_comment}

export module gl;

#include <cstdint>
#include <cstddef>

#if defined(_WIN32)
    #define GL_APIENTRYP __stdcall *
#else
    #define GL_APIENTRYP *
#endif
'''

    def _types(self) -> str:
        return '''
export namespace gl {

using Enum = unsigned int;
using Boolean = unsigned char;
using Bitfield = unsigned int;
using Byte = signed char;
using Ubyte = unsigned char;
using Short = short;
using Ushort = unsigned short;
using Int = int;
using Uint = unsigned int;
using Sizei = int;
using Float = float;
using Clampf = float;
using Double = double;
using Clampd = double;
using Char = char;
using Half = unsigned short;
using Fixed = int;
using Int64 = std::int64_t;
using Uint64 = std::uint64_t;
using Clampx = int;

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ >= 1070
using Intptr = long;
using Sizeiptr = long;
#else
using Intptr = std::intptr_t;
using Sizeiptr = std::ptrdiff_t;
#endif

using Sync = struct __GLsync*;
using DebugProc = void (GL_APIENTRYP)(Enum, Enum, Uint, Enum, Sizei, const Char*, const void*);
using EglImageOES = void*;
using EglClientBufferEXT = void*;
using HandleARB = unsigned int;

inline constexpr Boolean TRUE_VALUE = 1;
inline constexpr Boolean FALSE_VALUE = 0;

} // namespace gl
'''

    def _translate_type(self, gl_type: str) -> str:
        is_const = 'const' in gl_type
        clean = gl_type.replace('const', '').strip()
        ptr_count = clean.count('*')
        clean = clean.replace('*', '').strip()

        translated = self.TYPE_MAP.get(clean, clean)

        result = 'const ' if is_const else ''
        result += translated
        result += '*' * ptr_count
        return result

    def _strip_gl(self, name: str) -> str:
        return name[2:] if name.startswith('gl') else name

    def _enums(self) -> str:
        lines = ['\nexport namespace gl {\n']
        for enum in self.enums:
            cpp_name = enum.name[3:] if enum.name.startswith('GL_') else enum.name
            value = enum.value
            if value.startswith('GL_'):
                value = value[3:]
            lines.append(f'inline constexpr Enum {cpp_name} = {value};')
        lines.append('\n} // namespace gl\n')
        return '\n'.join(lines)

    def _function_pointer_types(self) -> str:
        lines = ['\nexport namespace gl {\nnamespace detail {\n']
        for cmd in self.commands:
            ret = self._translate_type(cmd.return_type)
            params = ', '.join(
                f'{self._translate_type(p.type)}{"*" * p.pointer_depth} {p.name}'
                for p in cmd.params
            )
            name = self._strip_gl(cmd.name).upper()
            lines.append(f'using PFN{name}PROC = {ret} (GL_APIENTRYP)({params});')
        lines.append('\n} // namespace detail\n} // namespace gl\n')
        return '\n'.join(lines)

    def _function_pointers(self) -> str:
        lines = ['\nnamespace gl::detail {\n']
        for cmd in self.commands:
            name = self._strip_gl(cmd.name)
            lines.append(f'inline PFN{name.upper()}PROC ptr{name} = nullptr;')
        lines.append('\n} // namespace gl::detail\n')
        return '\n'.join(lines)

    def _inline_functions(self) -> str:
        lines = ['\nexport namespace gl {\n']
        for cmd in self.commands:
            name = self._strip_gl(cmd.name)
            ret = self._translate_type(cmd.return_type)
            params = ', '.join(
                f'{self._translate_type(p.type)}{"*" * p.pointer_depth} {p.name}'
                for p in cmd.params
            )
            args = ', '.join(p.name for p in cmd.params)
            call = f'detail::ptr{name}({args})'
            body = call + ';' if ret == 'void' else f'return {call};'
            lines.append(f'inline {ret} {name}({params}) {{ {body} }}')
        lines.append('\n} // namespace gl\n')
        return '\n'.join(lines)

    def _loader(self) -> str:
        lines = ['\nexport namespace gl {\n']
        lines.append('using LoadProc = void* (*)(const char*);')
        lines.append('')
        lines.append('inline int load(LoadProc loadProc) {')
        lines.append('    int loaded = 0;')

        for cmd in self.commands:
            name = self._strip_gl(cmd.name)
            lines.append(f'    detail::ptr{name} = reinterpret_cast<detail::PFN{name.upper()}PROC>(loadProc("{cmd.name}"));')
            lines.append(f'    if (detail::ptr{name}) ++loaded;')

        lines.append('    return loaded;')
        lines.append('}')
        lines.append('')
        lines.append(f'inline constexpr int FUNCTION_COUNT = {len(self.commands)};')
        lines.append('')
        lines.append('inline bool isComplete() {')

        if self.commands:
            checks = [f'detail::ptr{self._strip_gl(c.name)} != nullptr' for c in self.commands]
            lines.append('    return ' + checks[0])
            for check in checks[1:]:
                lines.append(f'        && {check}')
            lines.append('    ;')
        else:
            lines.append('    return true;')

        lines.append('}')
        lines.append('\n} // namespace gl')
        return '\n'.join(lines)


def main():
    parser = argparse.ArgumentParser(description='Generate C++ OpenGL module from gl.xml')
    parser.add_argument('xml_path', help='Path to gl.xml')
    parser.add_argument('output_path', help='Output .cppm file')
    parser.add_argument('--api', choices=['gl', 'gles2', 'gles1'], default='gl')
    parser.add_argument('--profile', choices=['core', 'compatibility', 'common'], default='core')
    parser.add_argument('--version', default='4.6')

    args = parser.parse_args()

    print(f'Parsing {args.xml_path}...')
    registry = GLRegistry(args.xml_path, args.api, args.version, args.profile)

    print(f'Generating {args.api} {args.version} {args.profile}...')
    generator = ModuleGenerator(registry, args.api, args.version, args.profile)
    output = generator.generate()

    Path(args.output_path).write_text(output)
    print(f'Wrote {args.output_path}: {len(registry.enums)} enums, {len(registry.commands)} commands')


if __name__ == '__main__':
    main()