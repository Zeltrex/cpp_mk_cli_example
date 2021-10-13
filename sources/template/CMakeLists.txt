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

enable_testing()

set(TEMPLATE_TIMEOUT 1)
add_test(NAME test_1 COMMAND Template 10)
add_test(NAME test_2 COMMAND Template 10000 )

set_tests_properties(test_1 
PROPERTIES TIMEOUT ${TEMPLATE_TIMEOUT}
)

set_tests_properties(test_1 PROPERTIES
PASS_REGULAR_EXPRESSION "Version*"
FAIL_REGULAR_EXPRESSION "Error!")

