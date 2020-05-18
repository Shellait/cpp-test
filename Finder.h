#pragma once
#include <string>
#include <map>
#include <iostream>


struct Finder {
	static void FindByName(std::string, std::multimap<std::string, std::string>);

	static void FindByPhone(std::string name, std::multimap<std::string, std::string> base);
};
