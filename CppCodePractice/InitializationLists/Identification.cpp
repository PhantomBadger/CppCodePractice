#include "stdafx.h"
#include "Identification.h"


Identification::Identification()
{
	name = "None";
	age = 0;
	yearOfBirth = 1900;
}

//See the comment above the ctor in Person.cpp for why using Initialization Lists is more efficient
Identification::Identification(std::string name, short age, short yearOfBirth) : name(name)
{
	this->age = age;
	this->yearOfBirth = yearOfBirth;
}

Identification::~Identification()
{
}

std::string Identification::toString()
{
	using namespace std;

	//Format all of the ID data
	stringstream ss;
	ss << "Name: ";
	ss << name << endl;
	ss << "Age: ";
	ss << age << endl;
	ss << "Year of Birth: ";
	ss << yearOfBirth;

	//Return it as a string
	return ss.str();
}
