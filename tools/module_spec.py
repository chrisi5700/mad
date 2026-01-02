#!/usr/bin/env python3
"""
Module Specification Types

Common types for describing what C++ modules export.
Used by generators to communicate what they produce.

Architecture:
    glxml_parser.py  - Parses XML into raw data
    module_spec.py   - Types for describing module exports (this file)
    generate_gl.py   - Creates GLModuleSpec + generates gl.cppm
    generate_gm.py   - Uses GLModuleSpec + creates GMModuleSpec + generates gm.cppm
    generate_gn.py   - Uses GMModuleSpec + generates gn.cppm
"""

from dataclasses import dataclass, field


@dataclass
class TypeAlias:
    """A `using X = Y;` type alias in the module."""
    name: str           # C++ name in module: "Enum"
    definition: str     # What it aliases to: "unsigned int"
    gl_name: str        # Original GL name: "GLenum"


@dataclass
class StructType:
    """A struct type exported by the module."""
    name: str           # C++ name: "Shader"
    underlying_type: str  # What it wraps: "Uint" (for handles)
    gl_class: str       # Original class= value: "shader"


@dataclass
class EnumConstant:
    """A constexpr constant (like gl::TRUE)."""
    name: str           # C++ name: "TRUE"
    value: str          # Value: "1" or "0x8B31"
    gl_name: str        # Original: "GL_TRUE"
    groups: list[str] = field(default_factory=list)  # ["Boolean", "SpecialNumbers"]


@dataclass
class EnumClass:
    """An enum class type (like gm::ShaderType)."""
    name: str           # C++ name: "ShaderType"
    gl_group: str       # Original group name: "ShaderType"
    underlying_type: str  # Usually "Enum"
    values: list[tuple[str, str, str]] = field(default_factory=list)
    # values: [(cpp_name, value, gl_name), ...] e.g., [("Vertex", "0x8B31", "GL_VERTEX_SHADER")]


@dataclass
class FunctionParam:
    """A function parameter."""
    name: str           # Parameter name: "type"
    type: str           # C++ type: "Enum"


@dataclass
class Function:
    """An exported function."""
    name: str           # C++ name: "CreateShader"
    return_type: str    # "Uint"
    params: list[FunctionParam] = field(default_factory=list)
    gl_name: str = ""   # Original: "glCreateShader"

    # For gm/gn: additional metadata about typing
    return_handle_class: str | None = None   # If return is a handle type
    return_enum_group: str | None = None     # If return is an enum


@dataclass
class ModuleSpec:
    """
    Describes what a C++ module exports.

    Each generator creates one of these to:
    1. Use it to generate the .cppm file
    2. Expose it to downstream generators
    """
    name: str  # Module name: "gl", "gm", "gn"

    # Type aliases: using Enum = unsigned int;
    type_aliases: dict[str, TypeAlias] = field(default_factory=dict)
    # Key is the C++ name (e.g., "Enum")

    # Struct types: struct Shader { ... };
    struct_types: dict[str, StructType] = field(default_factory=dict)
    # Key is the C++ name (e.g., "Shader")

    # Enum constants: constexpr Enum TRUE = 1;
    enum_constants: dict[str, EnumConstant] = field(default_factory=dict)
    # Key is the C++ name (e.g., "TRUE")

    # Enum classes: enum class ShaderType : Enum { ... };
    enum_classes: dict[str, EnumClass] = field(default_factory=dict)
    # Key is the C++ name (e.g., "ShaderType")

    # Functions: Uint CreateShader(Enum type);
    functions: dict[str, Function] = field(default_factory=dict)
    # Key is the C++ name (e.g., "CreateShader")

    # ============ Query Methods ============

    def get_type(self, gl_name: str) -> TypeAlias | None:
        """Look up a type alias by its original GL name."""
        for alias in self.type_aliases.values():
            if alias.gl_name == gl_name:
                return alias
        return None

    def get_type_cpp_name(self, gl_name: str) -> str | None:
        """Get C++ name for a GL type, e.g., 'GLenum' -> 'Enum'."""
        alias = self.get_type(gl_name)
        return alias.name if alias else None

    def get_function(self, gl_name: str) -> Function | None:
        """Look up a function by its original GL name."""
        for func in self.functions.values():
            if func.gl_name == gl_name:
                return func
        return None

    def get_enum_constant(self, gl_name: str) -> EnumConstant | None:
        """Look up an enum constant by its original GL name."""
        for const in self.enum_constants.values():
            if const.gl_name == gl_name:
                return const
        return None

    def get_struct_by_class(self, gl_class: str) -> StructType | None:
        """Look up a struct by its handle class name, e.g., 'shader' -> Shader struct."""
        for struct in self.struct_types.values():
            if struct.gl_class == gl_class:
                return struct
        return None

    def has_type(self, cpp_name: str) -> bool:
        """Check if a type alias exists by C++ name."""
        return cpp_name in self.type_aliases

    def has_struct(self, cpp_name: str) -> bool:
        """Check if a struct type exists by C++ name."""
        return cpp_name in self.struct_types

    def has_function(self, cpp_name: str) -> bool:
        """Check if a function exists by C++ name."""
        return cpp_name in self.functions