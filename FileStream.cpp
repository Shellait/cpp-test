#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "FileStream.h"


std::multimap<std::string, std::string> ReadFile(std::string base) {
    std::ifstream file(base);
    std::string str;
    std::multimap<std::string, std::string> phonebook;
    while (!file.eof()) {
        file >> str;

        std::string firstPart = str.substr(0, str.find(';'));
        std::string secondPart = str.substr(str.find(';') + 1);
        phonebook.emplace(firstPart, secondPart);
    }
    file.close();
    return phonebook;
}

void WriteFile(std::multimap<std::string, std::string> base) {
    std::fstream file;
    file.open("phonebook.csv");
    if (file.is_open()) {
        for (auto i = base.begin(); i != base.end(); i++) {
            file << i->first << ";" << i->second << std::endl;
        }
        file.close();
    }
}
