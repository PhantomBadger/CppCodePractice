#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	virtual void makeNoise();
	virtual void setName(std::string name);

protected:
	std::string name = "John";
};

