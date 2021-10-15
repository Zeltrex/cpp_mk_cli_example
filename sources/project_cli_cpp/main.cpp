// Required System Lib:
#include <iostream>
// Project component dependencies:
#include "m_sysinfo.hpp"
// File dependencies:
#include "main.hpp"


int main(int argc, char *argv[])
{
    
    zeltrex::info::sysinfo c_info;

    std::cout << c_info.getOsName() << std::endl;
    std::cout << c_info.getAppVersion() << std::endl;

    return EXIT_SUCCESS;
}