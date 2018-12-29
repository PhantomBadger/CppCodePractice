#pragma once
#include <string>
#include <sstream>

class Identification
{
public:
	Identification();
	Identification(std::string name, short age, short yearOfBirth);
	~Identification();

	std::string toString();
private:
	std::string name;
	short age;
	short yearOfBirth;
};

