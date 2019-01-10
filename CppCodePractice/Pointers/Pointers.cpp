// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void basicPointerSetup()
{
	using namespace std;

	cout << endl << "---BASIC POINTER USE---" << endl;

	//BASIC POINTER USE
	int iValue = 8;

	//A 'pointer to an int' called pValue that is equal to the 'address' of value
	//The Type of this variable is 'Pointer to an Int'
	int* pValue = &iValue;

	//This is the ADDRESS the pointer is targeting
	cout << "Address pointer is targeting: " << pValue << endl;

	//This is the VALUE at the address the pointer is targeting
	//This is done through 'dereferencing' (*)
	cout << "Value at address pointer is targeting: " << *pValue << endl;

	//& can be used to find the address of any variable
	cout << "\nValue is: " << iValue << endl;
	cout << iValue << " is located at address: " << &iValue << endl;
}

void changeByValue(double value)
{
	using namespace std;

	//In this use case, the parameter 'value' is a COPY of the value passed in, and so changing it will not
	//change the value of the variable outside this scope
	value = 100.01;
	cout << "By Value Method Changed dValue to: " << value << endl;
}

void changeByReference(double* pValue)
{
	using namespace std;

	//In this use case, the parameter 'pValue' is a POINTER TO THE ADDRESS of the value passed in, and so changing 
	//it will change the value of the variable outside this scope, as we are literally changing the value at the address provided
	*pValue = 100.01;
	cout << "By Reference Method Changed dValue to: " << *pValue << endl;
}

void byReferencePointerUse()
{
	using namespace std;

	cout << endl << "---BY REFERENCE POINTERS---" << endl;

	double dValue = 12.34;

	//Variable is passed by value, so cannot be changed in another method
	cout << "By Value Modification:" << endl;
	cout << "1. dValue: " << dValue << endl;
	changeByValue(dValue);
	cout << "2. dValue: " << dValue << endl;

	//Address of dValue is passed into the pointer parameter
	//allowing modifications made in the method to be made to the address of our variable
	//effectively changing our double from another method
	cout << "\nBy Reference Modification:" << endl;
	cout << "1. dValue: " << dValue << endl;
	changeByReference(&dValue);
	cout << "2. dValue: " << dValue << endl;
}

//An example project showing some rudimentry pointer declaration and use case
int main()
{
	basicPointerSetup();
	byReferencePointerUse();

	//Footnote;
	//It's worth noting that the * is attached to the variable name in declaration, which is a holdover from C
	//I like to use `int* pInt` for readability, but it only really matters if trying to declare multiple pointers in one line
	//At which point
	//	int * pA, pB;
	//Will create pA as a pointer, and pB as an int
	//  int *pA, *pB;
	//Will create them both as pointers, but realistically this should be done on different lines anyway

	return 0;
}