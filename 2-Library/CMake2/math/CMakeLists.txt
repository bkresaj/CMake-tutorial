# Set the minimum required CMake version to 3.20
cmake_minimum_required(VERSION 3.20)

# Set variable to use it for later
set(LIBRARY_NAME math)

# Create a library named 'math' from the 'math.cpp' source file
add_library(${LIBRARY_NAME} math.cpp)

# Specify that the 'math' library's include directories are accessible to other targets
# The PUBLIC keyword means that any target linking to 'math' can access its include directories
target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


