#pragma once
#include <iostream>
#include <string>

class Cat
{
public:
	Cat();
	Cat(std::string newName);
	~Cat();

	void Speak();
	void SayName();
private:
	std::string name;
};

