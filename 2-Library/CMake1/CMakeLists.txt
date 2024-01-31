# Set the minimum required CMake version to 3.20
cmake_minimum_required(VERSION 3.20)

# Define the project named 'example'
project(example)

# Create an executable named 'example' using the source files 'main.cpp' and 'math.cpp'
add_executable(${PROJECT_NAME} main.cpp math/math.cpp)

# Specify the include directories for the 'example' target
# The PRIVATE keyword indicates that these directories are used only for the compilation of 'example'
target_include_directories(${PROJECT_NAME} PRIVATE math)