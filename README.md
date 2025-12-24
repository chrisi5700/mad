# mad

A C++23 module-based OpenGL loader. Like [GLAD](https://glad.dav1d.de/), but as a module.

```cpp
import gl;

// After creating your OpenGL context
gl::load([](const char* name) {
    return reinterpret_cast<void*>(glfwGetProcAddress(name));
});

// Use OpenGL - no GL_ prefixes, no gl prefixes
gl::ClearColor(0.2f, 0.3f, 0.3f, 1.0f);
gl::Clear(gl::COLOR_BUFFER_BIT | gl::DEPTH_BUFFER_BIT);

gl::Uint vao;
gl::GenVertexArrays(1, &vao);
```

## Requirements

- CMake 3.28+
- C++23 compiler with module support (GCC 14+, Clang 17+, MSVC 17.5+)

## Usage

Add as a subdirectory:

```cmake
add_subdirectory(mad)
target_link_libraries(your_target PRIVATE mad::mad)
```

Or with FetchContent:

```cmake
include(FetchContent)
FetchContent_Declare(mad
    GIT_REPOSITORY https://github.com/chrisi5700/mad.git
    GIT_TAG main
)
FetchContent_MakeAvailable(mad)
target_link_libraries(your_target PRIVATE mad::mad)
```

## API

Types, enums, and functions are in the `gl::` namespace with prefixes stripped:

| OpenGL | mad |
|--------|-----|
| `GLuint` | `gl::Uint` |
| `GL_COLOR_BUFFER_BIT` | `gl::COLOR_BUFFER_BIT` |
| `glClear()` | `gl::Clear()` |

### Loading

```cpp
// Returns number of functions loaded
int count = gl::load(getProcAddressFunc);

// Check if everything loaded
if (gl::isComplete()) { /* all good */ }

// Total functions in this GL version
int total = gl::FUNCTION_COUNT;  // 699 for GL 4.6 core
```

## Regenerating

The module is pre-generated for OpenGL 4.6 Core. To regenerate for a different version:

```bash
# Clone with submodule
git clone --recursive https://github.com/chrisi5700/mad.git

# Or init submodule after cloning
git submodule update --init

# Regenerate
python tools/generate.py external/OpenGL-Registry/xml/gl.xml src/gl.cppm \
    --api gl --profile core --version 4.6
```

Options:
- `--api`: `gl`, `gles2`, `gles1`
- `--profile`: `core`, `compatibility`
- `--version`: e.g., `4.6`, `3.3`, `2.1`

## Building Examples

```bash
cmake -B build -DMAD_BUILD_EXAMPLES=ON
cmake --build build
```

Requires GLFW. With vcpkg:

```bash
cmake -B build -DMAD_BUILD_EXAMPLES=ON -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake
```

## License

MIT
