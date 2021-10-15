// Required System Lib:
#include <string>
#include <iostream>
#include <memory>
#include <iomanip>
// Project component dependencies:

// File dependencies:
#include "config.h"
#include "main.hpp"


int main(int argc, char *argv[])
{
    std::cout << "Version " << Template_VERSION_MAJOR << "." << Template_VERSION_MINOR << std::endl;
    return EXIT_SUCCESS;
}