// Example usage of the generated OpenGL module
//
// CMakeLists.txt:
//   cmake_minimum_required(VERSION 3.28)
//   project(gl_module_example CXX)
//   set(CMAKE_CXX_STANDARD 26)
//   set(CMAKE_CXX_STANDARD_REQUIRED ON)
//
//   find_package(glfw3 REQUIRED)
//
//   add_library(gl)
//   target_sources(gl PUBLIC FILE_SET CXX_MODULES FILES gl.cppm)
//
//   add_executable(example example_usage.cpp)
//   target_link_libraries(example gl glfw)

#include <iostream>
#include <GLFW/glfw3.h>

import gl;

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW\n";
        return -1;
    }

    // Request OpenGL 4.6 Core
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create window
    GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Module Example", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Load OpenGL functions using GLFW's loader
    int loaded = gl::load([](const char* name) -> void* {
        return reinterpret_cast<void*>(glfwGetProcAddress(name));
    });

    std::cout << "Loaded " << loaded << " of " << gl::FUNCTION_COUNT << " OpenGL functions\n";

    if (!gl::isComplete()) {
        std::cout << "Warning: Not all functions could be loaded\n";
    }

    // Print OpenGL info
    std::cout << "OpenGL Vendor: " << gl::GetString(gl::VENDOR) << "\n";
    std::cout << "OpenGL Renderer: " << gl::GetString(gl::RENDERER) << "\n";
    std::cout << "OpenGL Version: " << gl::GetString(gl::VERSION) << "\n";

    // Create a simple shader program
    const char* vertexSource = R"(
        #version 460 core
        layout (location = 0) in vec3 aPos;
        void main() {
            gl_Position = vec4(aPos, 1.0);
        }
    )";

    const char* fragmentSource = R"(
        #version 460 core
        out vec4 FragColor;
        void main() {
            FragColor = vec4(1.0, 0.5, 0.2, 1.0);
        }
    )";

    gl::Uint vertexShader = gl::CreateShader(gl::VERTEX_SHADER);
    gl::ShaderSource(vertexShader, 1, &vertexSource, nullptr);
    gl::CompileShader(vertexShader);

    gl::Uint fragmentShader = gl::CreateShader(gl::FRAGMENT_SHADER);
    gl::ShaderSource(fragmentShader, 1, &fragmentSource, nullptr);
    gl::CompileShader(fragmentShader);

    gl::Uint shaderProgram = gl::CreateProgram();
    gl::AttachShader(shaderProgram, vertexShader);
    gl::AttachShader(shaderProgram, fragmentShader);
    gl::LinkProgram(shaderProgram);

    gl::DeleteShader(vertexShader);
    gl::DeleteShader(fragmentShader);

    // Create a triangle
    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f
    };

    gl::Uint VAO, VBO;
    gl::GenVertexArrays(1, &VAO);
    gl::GenBuffers(1, &VBO);

    gl::BindVertexArray(VAO);
    gl::BindBuffer(gl::ARRAY_BUFFER, VBO);
    gl::BufferData(gl::ARRAY_BUFFER, sizeof(vertices), vertices, gl::STATIC_DRAW);
    gl::VertexAttribPointer(0, 3, gl::FLOAT, gl::FALSE_VALUE, 3 * sizeof(float), nullptr);
    gl::EnableVertexAttribArray(0);

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        gl::ClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        gl::Clear(gl::COLOR_BUFFER_BIT);

        gl::UseProgram(shaderProgram);
        gl::BindVertexArray(VAO);
        gl::DrawArrays(gl::TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Cleanup
    gl::DeleteVertexArrays(1, &VAO);
    gl::DeleteBuffers(1, &VBO);
    gl::DeleteProgram(shaderProgram);

    glfwTerminate();
    return 0;
}