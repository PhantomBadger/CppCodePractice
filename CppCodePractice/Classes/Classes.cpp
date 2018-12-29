// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Cat.h"

int main()
{
	//Make a Cat on the stack using the default constructor
	Cat cat;

	//Make a Cat on the stack and specify a name
	Cat cat2("Fluffy");

	//Have both Cats say their names
	cat.SayName();
	cat2.SayName();

	//Both destructors are called at the end of this method
    return 0;
}

