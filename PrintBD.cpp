#include "PrintBD.h"


void PrintBD::printBD(std::multimap<std::string, std::string> base) {
    int num = 1;
    for (auto i = base.begin(); i != base.end(); ++i) {
        std::cout << num << ")" << i->first << ":" << i->second << std::endl;
        ++num;
    }
}