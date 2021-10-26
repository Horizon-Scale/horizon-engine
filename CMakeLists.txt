cmake_minimum_required(VERSION 3.0.0)

project(horizon-engine VERSION 0.1.0)

# Options of the Engine
include("cmake/options.cmake")

# Main Part of the Engine
add_subdirectory("Main")