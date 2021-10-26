# Target engine platforms

# Source files
set(SOURCES "PlatformBase.cpp;WindowBase.cpp")

# Check for Windows
if("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
    add_subdirectory("Windows")
endif()

add_library(horizon-engine_Platforms STATIC ${SOURCES})