# Specify the minimum version of CMake required to interpret this file.
cmake_minimum_required(VERSION 3.20)

# Declare the project with a specified name (hello_world).
project(hello_world)

# Create an executable target named 'hello_world' from the source file 'hello_world.cpp'.
# The 'add_executable' command takes the source file(s) as arguments.
add_executable(hello_world hello_world.cpp)
