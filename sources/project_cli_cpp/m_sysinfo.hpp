#pragma once
#include <string>


namespace zeltrex {
    namespace info{
        class sysinfo
        {
        private:
            /* data */
        public:
            sysinfo(/* args */);
            ~sysinfo();
            std::string getOsName();
            std::string getAppVersion();
        };        
    }
}