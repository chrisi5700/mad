
find_package(glfw3 REQUIRED)

add_executable(glfw_example glfw_example.cpp)
target_link_libraries(glfw_example PRIVATE mad::mad glfw)