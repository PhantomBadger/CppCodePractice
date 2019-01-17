// Encapsulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//An example class for encapsulation
class Frog
{
//Encapsulation means we encapsulate, or hide away, the instanced variables
//And use public documented functions to allow the user to access them
private:
	std::string name;

//It is common to separate the private methods from the private instance data
private:
	std::string getName() { return name; }

public:
	Frog(std::string name) : name(name) {}

	//We want everything to be private if possible, only making it public if the user needs it.
	//So if we wanted 'info' to be the only way for the user to access the name, we could move the getter and setting to be private
	void setName(std::string name) { this->name = name; }

	//We could make getName private, and use something like this to allow the user to access the information in a way we want
	//This way we can have reusable code as needed, but control how it gets accessed by other classes
	void info() { std::cout << "I am a Frog called " << getName() << std::endl; }

};

//An example project for encapsulation
int main()
{
	using namespace std;

	Frog frog("James");
	
	//Here we are accessing the private variable through the use of documented public functions
	//These allow us to control how these variables are accessed
	frog.info();

	frog.setName("Peter");

	frog.info();
}