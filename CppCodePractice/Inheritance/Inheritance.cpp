// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Dog.h"

//An example project showing inheritance, see the Animal, Bird, and Dog classes for how to set up inheritance in classes
int main()
{
    //Inheritance is when we expand an existing class, adding more specific functionality to it
	Animal animal;
	animal.setName("James");
	animal.makeNoise();

	//Polymorphism allows us to cast derived classes to their superclass
	//If we do this, we can only access methods from the base class, but they will use the vtable to call the derived implementations
	//Polymorphism in C++ works when you have indirection, ie, a pointer or reference to an object.
	//This means that
	/*
		Animal bird = Bird(); //This is saved on the Stack as type 'Animal', if we did 'new Bird();' and turned it into a Heap/Pointer allocation it would work
		bird.makeNoise();
	*/
	//Wouldn't work, but the below would.
	//Though the nuances of this will likely be covered in another project
	Bird b;
	Animal* bird = &b;
	bird->makeNoise();

	//As opposed to creating the derived class explicitly, which allows us to call any method from within that class
	Bird bird2;
	bird2.setName("Ganymede");
	bird2.fly();

	//Both Dog and Bird extend Animal, but both perform different things when 'makeNoise' is called
	Dog dog;
	dog.setName("Jasper");
	dog.makeNoise();
}
