cmake_minimum_required(VERSION 3.0.0)

project(horizon-engine VERSION 0.1.0)

# Set the C standard to C11
set(CMAKE_C_STANDARD "11")
# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD "17")

# Options of the Engine
include("cmake/options.cmake")

# Target platforms of the Engine
add_subdirectory("Platforms")

# Main Part of the Engine
add_subdirectory("Main")