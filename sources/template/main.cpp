#pragma once
#include <string>
#include "config.h"
#include "main.hpp"
#include <iostream>
#include <memory>
#include <iomanip>


namespace MyLibrary {

    class SubclassExample : public Example {
    public:

        /**
         * @bug second bug
         * @return
         */
        int virtualfunc() override;

        std::shared_ptr<std::string> super_long_function_with_lots_of_parameters(std::shared_ptr<std::string>& text, std::shared_ptr<std::string>& text2) {
            if(true) {
                std::cout << "this even has some code." << std::endl;
            }
        }

    };


}

int main(int argc, char *argv[])
{
     const double inputValue = std::stod(argv[1]);
    std::cout << "argc == " << argc << '\n';

    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Template_VERSION_MAJOR << "."
                << Template_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    for(int ndx{}; ndx != argc; ++ndx) {
        std::cout << "argv[" << ndx << "] == " << std::quoted(argv[ndx]) << '\n';
    }
    std::cout << "argv[" << argc << "] == "
              << static_cast<void*>(argv[argc]) << '\n';
    /*...*/
    return argc == 3 ? EXIT_SUCCESS : EXIT_FAILURE; // optional return value
}