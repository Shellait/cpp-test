#include "Finder.h"


void Finder::FindByName(std::string name, std::multimap<std::string, std::string> base) {
	for (auto& item : base) {
		if (item.first == name) {
			std::cout << item.first << "=" << item.second << std::endl;
		}
	}
}

void Finder::FindByPhone(std::string phoneNumber, std::multimap<std::string, std::string> base) {
	for (auto& item : base) {
		if (item.second == phoneNumber) {
			std::cout << item.first << "=" << item.second << std::endl;
		}
	}
}
