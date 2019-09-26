# After modifying this file, make sure you reload the CMake Project (right-click CMakeLists.txt and click Reload CMake Project.)
cmake_minimum_required(VERSION 3.8)
project(A4)

set(CMAKE_CXX_STANDARD 11)

# Do not modify these flags other than changing -ggdb to -O2 and back.
# Debugging build:
set(CMAKE_CXX_FLAGS "-ggdb -std=c++11 -Wall -Wextra")
# Optimization build:
# set(CMAKE_CXX_FLAGS "-O2 -std=c++11 -Wall -Wextra")

add_library(a4-bst-obj OBJECT src/a4-bst.hpp)
add_executable(a4-bst src/main-bst.cpp)

add_library(a4-pq-obj OBJECT src/a4-pq.hpp)
add_executable(a4-pq src/main-pq.cpp)
