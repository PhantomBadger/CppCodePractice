#include "pch.h"
#include "Animal.h"

void Animal::makeNoise()
{
	using namespace std;
	cout << "I am " << name << endl;
}

void Animal::setName(std::string name)
{
	this->name = name;
}