#pragma once
#include <string>
#include <sstream>
#include "Identification.h"

class Person
{
public:
	Person();
	Person(std::string name, short age, short yearOfBirth, bool isHappy);
	~Person();

	std::string toString();
private:
	Identification identification;
	bool isHappy = true;
};

