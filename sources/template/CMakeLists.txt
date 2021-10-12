cmake_minimum_required(VERSION 3.10)

# set the project name
project(Template VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(Template main.cpp)

configure_file(config.h.in main.hpp)

target_include_directories(Template PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )