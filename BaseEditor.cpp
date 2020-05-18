#include "BaseEditor.h"


void BaseEditor::AddPhone(std::multimap<std::string, std::string> &base) {
	std::cout << "Input name" << std::endl;
	std::string userInputName;
	std::cin >> userInputName;
	std::cout << "Input phone number" << std::endl;
	std::string userInputPhone;
	std::cin >> userInputPhone;
	base.emplace(userInputName, userInputPhone);
}

void BaseEditor::DeletePhone(std::multimap<std::string, std::string> &base) {
	std::cout << "Choose delete number:";
	std::string userChoice;
	std::cin >> userChoice;
	int userChoiceToInt = std::stoi(userChoice);
	int num = 1;
	std::multimap<std::string, std::string>::iterator itRemoveKey;
	for (auto i = base.begin(); i != base.end(); i++) {
		if (num == userChoiceToInt) {
			itRemoveKey = i;
		}
		num++;
	}
	base.erase(itRemoveKey);
}
