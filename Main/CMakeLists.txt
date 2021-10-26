# CMake file for the main Engine

# C and CXX Sources
set(SOURCES "main.cpp")

if(_HORIZON_WIN32)
    add_executable(horizon-engine WIN32 ${SOURCES})
else()
    add_executable(horizon-engine ${SOURCES})
endif()


target_link_libraries(horizon-engine horizon-engine_Platforms)