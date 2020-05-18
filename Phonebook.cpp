#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "FileStream.h"
#include "Finder.h"
#include "BaseEditor.h"
#include "PrintBD.h"


int main()
{
    const std::string DATABASE = "Phonebook.csv";
    auto phonebook = ReadFile(DATABASE);

    std::cout << "..........PHONEBOOK.........." << std::endl;
    std::cout << "0: Exit" << std::endl;
    std::cout << "1: Show phonebook" << std::endl;
    std::cout << "2: Search by name" << std::endl;
    std::cout << "3: Search by phone" << std::endl;
    std::cout << "4: Add phone number" << std::endl;
    std::cout << "5: Delete phone number" << std::endl;
    std::cout << "Choose number:" << std::endl;
    std::string choosenNumber;
    std::cin >> choosenNumber;

    while (choosenNumber != "0") {
        if (choosenNumber == "0") {
            break;
        }
        else if (choosenNumber == "1") {
            PrintBD::printBD(phonebook);
            std::cout << "Enter the next digit" << std::endl;
        }
        else if (choosenNumber == "2") {
            std::cout << "Write name:";
            std::string name;
            std::cin >> name;
            Finder::FindByName(name, phonebook);
            std::cout << "Enter the next digit" << std::endl;
        }
        else if (choosenNumber == "3") {
            std::cout << "Write phone:";
            std::string phone;
            std::cin >> phone;
            Finder::FindByPhone(phone, phonebook);
            std::cout << "Enter the next digit" << std::endl;
        }
        else if (choosenNumber == "4") {
            BaseEditor::AddPhone(phonebook);
            std::cout << "Enter the next digit" << std::endl;
        }
        else if (choosenNumber == "5") {
            BaseEditor::DeletePhone(phonebook);
            std::cout << "Enter the next digit" << std::endl;
        }
        std::cin >> choosenNumber;
    }
    WriteFile(phonebook);
}
