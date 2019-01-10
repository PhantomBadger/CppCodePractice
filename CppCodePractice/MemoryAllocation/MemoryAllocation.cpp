// MemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//An example project illustrating Memory Allocation, this is a follow on from 'New' and 'ReturningObjects'
int main()
{
	//We can create primitive types on the heap as well, using the same rules as specified previously
	int* pInt = new int;
	delete pInt;

	//We can also allocate large amounts of memory at a time using arrays
	//This will allocate memory for an array of 10 integers (10 integers worth of contiguous memory)
	int* pIntArray = new int[10];

	//In order to delete the entire array, we should put square brackets between delete and the pointer name
	//This will free the memory for all of the ints
	delete[] pIntArray;

	//Since a char is 1 byte, it can be used to allocate specific amounts of data easily
	//The following line will allocate 100 bytes worth of memory for us
	char* pMem = new char[100];
	delete[] pMem;

	//Footnote
	//It's easy to set a string to a single character using one of the string's consctructors, like so
	char c = 'a';
	std::string text(1, c);		// "a"
	
	//Also remember since 'char' is an integer type, we can increment it
	c++;

	//Strings can also be specified to be multiple of the same character, like so:
	std::string text2(5, c);	// "aaaaa"
}
