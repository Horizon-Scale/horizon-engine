# CMake options for Horizon Engine
option(_HORIZON_WIN32 "Activate the Win32 for the Engine (Disable the terminal)" OFF)

# Add definitions for the Win32
if(_HORIZON_WIN32)
    add_definitions(-D_HORIZON_WIN32)
endif()
