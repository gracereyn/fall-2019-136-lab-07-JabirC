#pragma once
#include <iostream>
#include <cctype>
#include <string>
#include <fstream>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);
std::string format(std::string filename);
std::string read(std::string filename);
