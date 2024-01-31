# Set the minimum required CMake version to 3.20
cmake_minimum_required(VERSION 3.20)

# Define the project named 'example'
project(example)

# Create an executable named 'example' using the source file 'main.cpp'
add_executable(${PROJECT_NAME} main.cpp)

# Add a subdirectory 'math' to the project, which contains its own CMakeLists.txt
add_subdirectory(math)

# Link the 'math' library to the 'example' executable
# The PRIVATE keyword indicates that the 'math' library is used only by 'example'
target_link_libraries(${PROJECT_NAME} PRIVATE math)