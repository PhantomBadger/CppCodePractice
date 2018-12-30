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
//The following would happen
// 1) The identification member would be created with the default ctor
// 2) A temporary object would be constructed using the specified ctor
// 3) The copy ctor of identification member would be called
//Which would be three calls total.
//However doing it the way shown below only calls the desired ctor (1 call total)
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
