project(MyProject)

if(DEBUG_MACRO)
    message("Debug mode enabled")
endif()

if(RELEASE_MACRO)
    message("Release mode enabled")
endif()

add_executable(my_project main.cpp)
