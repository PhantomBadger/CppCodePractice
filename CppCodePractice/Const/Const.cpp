// Const.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Animal.h"

//A project showing an example of the 'const' keyword and it's usage
int main()
{
	using namespace std;

	//====Simple Const====
	//By prefixing a variable declaration with 'const' we state that it cannot be changed after instantiation
	const double PI = 3.141592654;
	cout << "PI has a value of: " << PI << endl;

	//====Pointer Const====
	int value = 8;

	//Putting const before the type means the pointer cannot change the VALUE
	//at the address it's pointing at, (it is pointing to a constant integer)
	//ie, the following would not compile now
	/*
		*pValue = 12;
	*/
	const int* pValue = &value;
	
	//const after the type but before the name means the pointer cannot be changed
	//to a different address 
	//ie, following this with:
	/*
		int value2 = 5;
		pValue2 = &value2;
	*/
	int* const pValue2 = &value;

	//The above two const usages can be combined
	//This prevents us changing what the pointer points to, and changing the value at that address
	//It helps to read the type backwards, so 'const int * const' would be a 'constant pointer to an integer thats constant'
	const int* const pValue3 = &value;
}