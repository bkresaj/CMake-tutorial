# Set the minimum required CMake version to 3.20
cmake_minimum_required(VERSION 3.20)

# Set variable to use it for later
set(LIBRARY_NAME math)

# Create an INTERFACE library named 'math'
add_library(${LIBRARY_NAME} INTERFACE)

# Specify that the 'math' library provides include directories
# The INTERFACE keyword makes these include directories accessible to other targets
target_include_directories(${LIBRARY_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})