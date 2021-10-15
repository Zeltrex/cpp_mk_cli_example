cmake_minimum_required(VERSION 3.10)
project(rp_cli_cpp VERSION 1.3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
include_directories(${PROJECT_SOURCE_DIR})
file(GLOB SOURCES "*.cpp")
add_executable(rp_cli_cpp ${SOURCES})

target_include_directories(rp_cli_cpp PUBLIC "${PROJECT_BINARY_DIR}")
configure_file(config.h.in config.h)