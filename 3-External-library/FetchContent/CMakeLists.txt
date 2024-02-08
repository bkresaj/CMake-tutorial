# Set the minimum required CMake version to 3.20
cmake_minimum_required(VERSION 3.20)

# Define the project name as "TestProject"
project(TestProject)

# Include the FetchContent module to download external dependencies
include(FetchContent)

# Declare Google Test as an external project with a specific repository and tag
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.14.0
)

# Enable Google Test by making it available for use in the project
FetchContent_MakeAvailable(googletest)

# Add the 'math' subdirectory to the project
add_subdirectory(math)

# Create an executable named after the project using the test file 'math_test.cpp'
add_executable(${PROJECT_NAME} math_test.cpp)

# Link the Google Test libraries and the 'math' library to the test executable
target_link_libraries(${PROJECT_NAME} gtest gtest_main math)
