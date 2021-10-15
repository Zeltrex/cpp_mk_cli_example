cmake_minimum_required(VERSION 3.10)

# set the project name
project(rp_cli_cpp VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(rp_cli_cpp main.cpp)

configure_file(config.h.in main.hpp)

target_include_directories(rp_cli_cpp PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

enable_testing()

set(rp_cli_cpp_TIMEOUT 1)
add_test(NAME test_1 COMMAND rp_cli_cpp 10)
add_test(NAME test_2 COMMAND rp_cli_cpp 10000 )

set_tests_properties(test_1 
PROPERTIES TIMEOUT ${rp_cli_cpp_TIMEOUT}
)

set_tests_properties(test_1 PROPERTIES
PASS_REGULAR_EXPRESSION "Version*"
FAIL_REGULAR_EXPRESSION "Error!")

