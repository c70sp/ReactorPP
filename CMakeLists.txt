cmake_minimum_required(VERSION 3.10)
project(main)

set(CMAKE_TOOLCHAIN_FILE "C:/dev/vcpkg/scripts/buildsystems/vcpkg.cmake")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(glad_DIR "C:/dev/vcpkg/installed/x64-mingw-dynamic/share/glad")
set(glfw3_DIR "C:/dev/vcpkg/installed/x64-windows/share/glfw3")
set(glm_DIR "C:/dev/vcpkg/installed/x64-windows/share/glm")
set(freetype_DIR "C:/dev/vcpkg/installed/x64-mingw-dynamic/share/freetype")

find_package(glad CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glm CONFIG REQUIRED)
find_package(freetype CONFIG REQUIRED)

include_directories(${GLFW3_INCLUDE_DIRS} ${GLAD_INCLUDE_DIRS} ${GLM_INCLUDE_DIRS})

add_executable(main src/main.cpp include/utils.hpp src/utils.cpp include/mesh3d.hpp src/mesh3d.cpp include/app.hpp src/app.cpp include/shader.hpp src/shader.cpp include/reactor.hpp src/reactor.cpp include/neutron.hpp src/neutron.cpp include/atom.hpp src/atom.cpp include/structs.hpp include/controlRod.hpp src/controlRod.cpp include/text.hpp src/text.cpp)

target_link_libraries(main PRIVATE glad::glad glfw glm::glm dwmapi Freetype::Freetype)