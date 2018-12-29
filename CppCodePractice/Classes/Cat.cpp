#include "stdafx.h"
#include "Cat.h"


Cat::Cat()
{
	//Give the Cat a default name
	name = "Arthur";
}

Cat::Cat(std::string newName)
{
	name = newName;
}

Cat::~Cat()
{
	std::cout << name + " is Destroyed" << std::endl;
}

void Cat::Speak()
{
	std::cout << "Meow" << std::endl;
}

void Cat::SayName()
{
	std::cout << name << std::endl;
}
