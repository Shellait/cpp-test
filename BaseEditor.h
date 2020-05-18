#pragma once
#include <string>
#include <map>
#include <iostream>
#include <iterator>

struct BaseEditor {
	static void AddPhone(std::multimap<std::string, std::string>&);

	static void DeletePhone(std::multimap<std::string, std::string>&);
};
