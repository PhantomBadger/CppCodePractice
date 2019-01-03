// References.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//When using a reference as a parameter of a function, the address of the variable passed in will be pushed onto the function stack and used instead
//Pointers can function the same as references, but it's simpler to use a reference where possible.
void ChangeValue(int& valueToChange)
{
	//This will change the variable passed into the function as the parameter 'valueToChange'
	valueToChange = 50;
}

//An example project going through references
int main()
{
	using namespace std;

	//This will behave as expected, value 1 will not change, but value 2 will
	cout << "Non-Reference Assignment" << endl;
	int value1 = 8;
	int value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	cout << "\nReference Assignment" << endl;

	//This is called a 'reference' and this is a 'reference to value 1'
	//It's essentially another name for value1.
	//If we didnt use a reference (as seen above) memory would be allocated for a new variable
	//but by using a reference we essentially make a synonym/alias, and at compile time, value3 is replaced with the address of value1
	//One of the limitations of a reference is that it must be instantiated with another variable. It cannot be given a raw value (eg = 20)
	int &value3 = value1; //Can also be written as int& value3 (similarly to a pointer)
	value3 = 25;

	cout << "Value1: " << value1 << endl;
	cout << "Value3: " << value3 << endl;

	//We can use references in order to change values passed into a function
	cout << "\nReference Assignment via Function" << endl;

	int value4 = 10;
	ChangeValue(value4);

	//In this case, since ChangeValue takes a reference as it's parameter (and we give it value4), it will change the value of 'value4'
	cout << "Value4: " << value4 << endl;
}
