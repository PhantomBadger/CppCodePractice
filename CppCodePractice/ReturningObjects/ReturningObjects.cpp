// ReturningObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Animal.h"

//An example project showing returning objects from functions
//Acts as a follow up to the 'New' project, which showcases the new operator
int main()
{
	using namespace std;

	//This is inefficient, as an Animal is created using the Default Ctor inside, and then Copied using the Copy Constructor to cat
	Animal cat = Animal::createAnimalOnStack("Frank");
	cat.speak();

	cout << endl;

	//We can make it more efficient by using a reference instead
	//However, this will crash on the commented out '.speak' line, this is because the variable will be made inside 'createAnimalWithReference'
	//And then will be destroyed when it leaves it, causing our reference to be pointing towards random memory
	Animal& dog = Animal::createAnimalWithReference("George");
	//dog.speak();

	cout << endl;

	//The practical way to do this is to use a pointer, and to make the variable we want to reference on the HEAP
	//this will ensure it lives outside it's scope, but it must then be deleted with 'delete pName' otherwise it will stay hogging the memory
	Animal* bird = Animal::createAnimalWithPointer("Ganymede");
	bird->speak();
	delete bird;

	cout << endl;

	return 0;
}
