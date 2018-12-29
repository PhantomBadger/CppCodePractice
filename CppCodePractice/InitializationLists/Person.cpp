#include "stdafx.h"
#include "Person.h"

Person::Person()
{
	isHappy = true;
}

//Using an Initialization List here
//If we didnt use one, and instead called the ctor inside this ctor:
/*
Person::Person(std::string name, short age, short yearOfBirth, bool isHappy)
{
	this->identification = Identification(name, age, yearOfBirth);
	this->isHappy = isHappy;
}
*/
//we would actually be calling the default ctor for Identification first, and then the one we want (2 calls total)
//however doing it this way only callls the desired ctor (1 call total)
Person::Person(std::string name, short age, short yearOfBirth, bool isHappy) : identification(name, age, yearOfBirth)
{
	this->isHappy = isHappy;
}

Person::~Person()
{
}

std::string Person::toString()
{
	using namespace std;

	stringstream ss;
	ss << identification.toString() << endl;
	ss << "Is Happy: ";
	ss << isHappy;

	return ss.str();
}
