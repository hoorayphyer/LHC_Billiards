cmake_minimum_required(VERSION 2.8)
project (LHC_Billiard)

# Enable testing
enable_testing(true)

set(CMAKE_CXX_FLAGS "-std=c++17 -pthread -O3 -g -DNDEBUG -Wall -Wextra -fPIC -march=native ${CXX_EXTRA_FLAGS}")

find_package(OpenGL REQUIRED COMPONENTS OpenGL EGL )
# find glfw3, from https://www.glfw.org/docs/3.0/build.html
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)

add_subdirectory(src)
add_subdirectory(tests)
