cmake_minimum_required(VERSION 3.5) # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") # Enable c++11 standard

set(SOURCE_FILES main.cpp)            # Add main.cpp file of project root directory as source file
add_executable(simple_example ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable