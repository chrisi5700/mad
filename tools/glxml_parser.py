#!/usr/bin/env python3
"""
OpenGL XML Parser - Single Source of Truth

Parses gl.xml into Python dataclasses that all generators consume.
No generator should ever parse another generator's output.

The parser ONLY stores data from XML. It does NOT compute C++ names.
Generators use utility functions to transform names as needed.

Usage:
    from glxml_parser import GLRegistry

    registry = GLRegistry.parse('gl.xml', api='gl', version='4.6', profile='core')

    # Access parsed data (all names are as they appear in XML)
    registry.types          # dict[name, GLType]
    registry.enums          # dict[name, GLEnum]
    registry.enum_groups    # dict[group_name, GLEnumGroup]
    registry.commands       # dict[name, GLCommand]
    registry.handle_classes # dict[class_name, GLHandleClass]

    # Utility functions for generators (NOT automatically applied)
    strip_gl_prefix('GL_TRUE')           # -> 'TRUE'
    strip_gl_prefix('glCreateShader')    # -> 'CreateShader'
    to_pascal_case('vertex array')       # -> 'VertexArray'
    to_pascal_case('VERTEX_SHADER')      # -> 'VertexShader'
"""

from dataclasses import dataclass, field
from xml.etree import ElementTree as ET


# ============ Utility Functions (for generators to use) ============

def strip_gl_prefix(name: str) -> str:
    """Strip GL_/GL/gl prefix from a name."""
    if name.startswith('GL_'):
        return name[3:]
    if name.startswith('GL') and len(name) > 2:
        # GLbitfield -> bitfield, GLuint -> uint
        return name[2:]
    if name.startswith('gl'):
        # glCreateShader -> CreateShader
        return name[2:]
    return name


def to_pascal_case(name: str) -> str:
    """Convert 'vertex array' or 'VERTEX_SHADER' to PascalCase."""
    # Handle space-separated (e.g., "vertex array" -> "VertexArray")
    if ' ' in name:
        return ''.join(word.capitalize() for word in name.split())
    # Handle underscore-separated (e.g., "VERTEX_SHADER" -> "VertexShader")
    if '_' in name:
        return ''.join(word.capitalize() for word in name.lower().split('_'))
    # Single word all caps (e.g., "BOOL" -> "Bool")
    if name.isupper():
        return name.capitalize()
    # Already mixed case or lowercase - just capitalize first letter
    return name[0].upper() + name[1:] if name else name


# ============ Data Classes (store only XML data) ============

@dataclass
class GLType:
    """A GL type as defined in the <types> section of gl.xml."""
    name: str                    # e.g., "GLenum", "GLboolean"
    definition: str              # Full typedef text, e.g., "typedef unsigned int GLenum;"
    requires: str | None = None  # Dependency type, e.g., "khrplatform"
    comment: str | None = None   # Optional comment attribute
    api: str | None = None       # Optional api attribute


@dataclass
class GLEnum:
    """A GL enum value from gl.xml."""
    name: str                    # e.g., "GL_TRUE", "GL_VERTEX_SHADER"
    value: str                   # e.g., "1", "0x8B31"
    groups: list[str] = field(default_factory=list)  # e.g., ["Boolean", "SpecialNumbers"]
    alias: str | None = None     # If this is an alias for another enum
    comment: str | None = None


@dataclass
class GLEnumGroup:
    """A group of related enums (from group= attributes)."""
    name: str                    # e.g., "ShaderType", "BufferTarget"
    enums: list[GLEnum] = field(default_factory=list)


@dataclass
class GLHandleClass:
    """A handle class discovered from class= attributes on commands."""
    name: str                    # e.g., "shader", "program", "buffer"
    underlying_type: str         # e.g., "GLuint", "GLsync"


@dataclass
class GLParam:
    """A function parameter from a command definition."""
    name: str                    # Parameter name
    type: str                    # Full type string, e.g., "const GLfloat*"
    pointer_depth: int = 0       # Number of pointer indirections
    is_const: bool = False       # Whether type includes const
    class_attr: str | None = None   # class= attribute value
    group_attr: str | None = None   # group= attribute (first one if multiple)
    len_attr: str | None = None     # len= attribute


@dataclass
class GLCommand:
    """A GL function from the <commands> section."""
    name: str                    # e.g., "glCreateShader"
    return_type: str             # e.g., "GLuint", "void"
    return_class: str | None = None   # class= on proto
    return_group: str | None = None   # group= on proto
    params: list[GLParam] = field(default_factory=list)

    @property
    def has_pointers(self) -> bool:
        """Check if command uses any pointers (params or return)."""
        if '*' in self.return_type:
            return True
        return any(p.pointer_depth > 0 for p in self.params)


# ============ Registry (parses and stores XML data) ============

class GLRegistry:
    """
    Parsed OpenGL registry for a specific API/version/profile.

    This is the single source of truth. All data comes directly from XML.
    """

    def __init__(self):
        self.types: dict[str, GLType] = {}
        self.enums: dict[str, GLEnum] = {}
        self.enum_groups: dict[str, GLEnumGroup] = {}
        self.commands: dict[str, GLCommand] = {}
        self.handle_classes: dict[str, GLHandleClass] = {}

        self.api: str = ''
        self.version: str = ''
        self.profile: str = ''

        # Groups referenced by commands (for generators that want to filter)
        self.command_referenced_groups: set[str] = set()

    @classmethod
    def parse(cls, xml_path: str, api: str, version: str, profile: str) -> 'GLRegistry':
        """Parse gl.xml and return a registry for the specified API/version/profile."""
        registry = cls()
        registry.api = api
        registry.version = version
        registry.profile = profile

        tree = ET.parse(xml_path)
        root = tree.getroot()

        # Collect requirements for this version
        required_enums, required_commands = registry._collect_requirements(root, api, version, profile)

        # Parse everything from XML
        registry._parse_types(root)
        registry._parse_enums(root, required_enums)
        registry._parse_commands(root, required_commands)
        registry._build_enum_groups()

        return registry

    def _collect_requirements(self, root: ET.Element, api: str, version: str, profile: str) -> tuple[set[str], set[str]]:
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

    def _parse_types(self, root: ET.Element):
        """Parse <types> section from XML."""
        types_elem = root.find('types')
        if types_elem is None:
            return

        for type_elem in types_elem.findall('type'):
            # Get name - either from <name> element or name= attribute
            name_elem = type_elem.find('name')
            if name_elem is not None:
                name = name_elem.text
            else:
                name = type_elem.get('name')

            if not name:
                continue

            # Build full definition by concatenating all text content
            definition_parts = []
            if type_elem.text:
                definition_parts.append(type_elem.text)

            for child in type_elem:
                if child.text:
                    definition_parts.append(child.text)
                if child.tail:
                    definition_parts.append(child.tail)

            definition = ''.join(definition_parts).strip()

            self.types[name] = GLType(
                name=name,
                definition=definition,
                requires=type_elem.get('requires'),
                comment=type_elem.get('comment'),
                api=type_elem.get('api')
            )

    def _parse_enums(self, root: ET.Element, required: set[str]):
        """Parse required enums from XML."""
        for enums_elem in root.findall('enums'):
            for enum_elem in enums_elem.findall('enum'):
                name = enum_elem.get('name')
                value = enum_elem.get('value')

                if name not in required:
                    continue
                if value is None:
                    continue

                groups_str = enum_elem.get('group', '')
                groups = [g.strip() for g in groups_str.split(',') if g.strip()]

                self.enums[name] = GLEnum(
                    name=name,
                    value=value,
                    groups=groups,
                    alias=enum_elem.get('alias'),
                    comment=enum_elem.get('comment')
                )

    def _parse_commands(self, root: ET.Element, required: set[str]):
        """Parse required commands from XML."""
        commands_elem = root.find('commands')
        if commands_elem is None:
            return

        for cmd_elem in commands_elem.findall('command'):
            proto = cmd_elem.find('proto')
            if proto is None:
                continue

            name_elem = proto.find('name')
            if name_elem is None or name_elem.text not in required:
                continue

            name = name_elem.text

            # Extract return type and attributes
            return_type = self._extract_type_string(proto)
            return_class = proto.get('class')
            return_group = proto.get('group')
            if return_group:
                return_group = return_group.split(',')[0].strip()
                self.command_referenced_groups.add(return_group)

            # Track handle class from return type
            if return_class:
                self._register_handle_class(return_class, return_type)

            # Parse parameters
            params = []
            for param_elem in cmd_elem.findall('param'):
                param = self._parse_param(param_elem)
                params.append(param)

                # Track used groups and handle classes
                if param.group_attr:
                    self.command_referenced_groups.add(param.group_attr)
                if param.class_attr:
                    base_type = param.type.replace('const', '').replace('*', '').strip()
                    self._register_handle_class(param.class_attr, base_type)

            self.commands[name] = GLCommand(
                name=name,
                return_type=return_type,
                return_class=return_class,
                return_group=return_group,
                params=params
            )

    def _parse_param(self, param_elem: ET.Element) -> GLParam:
        """Parse a single <param> element."""
        name_elem = param_elem.find('name')
        name = name_elem.text if name_elem is not None else ''

        type_str = self._extract_type_string(param_elem)

        # Parse group - take first if multiple
        group_str = param_elem.get('group', '')
        group = group_str.split(',')[0].strip() if group_str else None

        return GLParam(
            name=name,
            type=type_str,
            pointer_depth=type_str.count('*'),
            is_const='const' in type_str,
            class_attr=param_elem.get('class'),
            group_attr=group,
            len_attr=param_elem.get('len')
        )

    def _extract_type_string(self, elem: ET.Element) -> str:
        """Extract full type string from <proto> or <param> element."""
        parts = []

        if elem.text:
            parts.append(elem.text.strip())

        ptype = elem.find('ptype')
        if ptype is not None:
            if ptype.text:
                parts.append(ptype.text.strip())
            if ptype.tail:
                parts.append(ptype.tail.strip())

        # Don't include the name, just type info
        result = ' '.join(p for p in parts if p)
        result = result.replace(' *', '*').replace('* ', '*')
        return result or 'void'

    def _register_handle_class(self, class_name: str, gl_type: str):
        """Register a handle class, checking for consistency."""
        clean_type = gl_type.replace('const', '').replace('*', '').strip()

        if class_name in self.handle_classes:
            existing = self.handle_classes[class_name]
            if existing.underlying_type != clean_type:
                raise ValueError(
                    f"Inconsistent type for handle class '{class_name}': "
                    f"previously saw '{existing.underlying_type}', now seeing '{clean_type}'"
                )
        else:
            self.handle_classes[class_name] = GLHandleClass(
                name=class_name,
                underlying_type=clean_type
            )

    def _build_enum_groups(self):
        """Build enum groups from enums based on their group= attributes."""
        # Collect all enums into their groups
        all_groups: dict[str, list[GLEnum]] = {}
        for enum in self.enums.values():
            for group in enum.groups:
                if group not in all_groups:
                    all_groups[group] = []
                all_groups[group].append(enum)

        # Store all groups (filtering is a generator concern, not parser concern)
        for group_name, group_enums in all_groups.items():
            self.enum_groups[group_name] = GLEnumGroup(
                name=group_name,
                enums=group_enums
            )

    # ============ Accessors (return sorted lists) ============

    def get_sorted_types(self) -> list[GLType]:
        """Get all types sorted by name."""
        return sorted(self.types.values(), key=lambda t: t.name)

    def get_sorted_enums(self) -> list[GLEnum]:
        """Get all enums sorted by name."""
        return sorted(self.enums.values(), key=lambda e: e.name)

    def get_sorted_commands(self) -> list[GLCommand]:
        """Get all commands sorted by name."""
        return sorted(self.commands.values(), key=lambda c: c.name)

    def get_sorted_enum_groups(self) -> list[GLEnumGroup]:
        """Get enum groups sorted by name."""
        return sorted(self.enum_groups.values(), key=lambda g: g.name)

    def get_sorted_handle_classes(self) -> list[GLHandleClass]:
        """Get handle classes sorted by name."""
        return sorted(self.handle_classes.values(), key=lambda h: h.name)


# ============ Testing ============

if __name__ == '__main__':
    import sys
    if len(sys.argv) < 2:
        print("Usage: python glxml_parser.py <gl.xml> [--api gl] [--version 4.6] [--profile core]")
        sys.exit(1)

    xml_path = sys.argv[1]
    api = 'gl'
    version = '4.6'
    profile = 'core'

    # Simple arg parsing
    args = sys.argv[2:]
    for i, arg in enumerate(args):
        if arg == '--api' and i + 1 < len(args):
            api = args[i + 1]
        elif arg == '--version' and i + 1 < len(args):
            version = args[i + 1]
        elif arg == '--profile' and i + 1 < len(args):
            profile = args[i + 1]

    print(f"Parsing {xml_path} for {api} {version} {profile}...")
    registry = GLRegistry.parse(xml_path, api, version, profile)

    print(f"\nTypes: {len(registry.types)}")
    print(f"Enums: {len(registry.enums)}")
    print(f"Enum Groups (all): {len(registry.enum_groups)}")
    print(f"Enum Groups (command-referenced): {len(registry.command_referenced_groups)}")
    print(f"Commands: {len(registry.commands)}")
    print(f"Handle Classes: {len(registry.handle_classes)}")

    print("\n--- Sample Types ---")
    for t in list(registry.get_sorted_types())[:5]:
        print(f"  {t.name}: {t.definition[:60]}...")

    print("\n--- Handle Classes ---")
    for h in registry.get_sorted_handle_classes():
        print(f"  {h.name} ({h.underlying_type})")

    print("\n--- Sample Enum Groups ---")
    for g in list(registry.get_sorted_enum_groups())[:3]:
        print(f"  {g.name}: {len(g.enums)} values")
        for e in g.enums[:3]:
            print(f"    {e.name} = {e.value}")