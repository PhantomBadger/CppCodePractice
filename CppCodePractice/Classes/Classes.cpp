// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Cat.h"

//An example project that shows the use of simple classes, as well as
//constructors, destructors, and constructor overrides
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

