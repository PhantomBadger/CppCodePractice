#pragma once
#include <iostream>
#include <string>

//Simple Inline Class to aid in the const demonstration
class Animal
{
public:
	//Addec const before the type of the parameter
	//This means that the parameter wont be changed within the method
	//ie, if I added "noise = "Moo"" then it would not compile.
	void setNoise(const std::string noise) { this->noise = noise; }
	
	//Added const between the method name and the implementation
	//This means that this method can no longer change any data in the instance
	//ie, if I added "noise = "Moo"" then it would not compile.
	void speak() const { std::cout << noise << std::endl; }
private:
	std::string noise;
};
