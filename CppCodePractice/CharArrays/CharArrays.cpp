// CharArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//An example project showing the use of char arrays
int main()
{
	using namespace std;

	//The same as a string saying "hello"
	char text[] = "hello"; // Can be used with a primitive string instead of doing `= { 'h', 'e', 'l', 'l', 'o' };`

	cout << "Raw Output: (Hidden Null Terminator)" << endl;

	//Output the letters of the array one by one
	//This will give the following:
	/*
	0: h
	1: e
	2: l
	3: l
	4: o
	5:
	*/
	//This is because of the 'null terminator' at the end
	for (int i = 0; i < sizeof(text); i++)
	{
		cout << i << ": " << text[i] << endl;
	}

	cout << "\nRaw Output: (Visible Null Terminator)" << endl;
	//Output the letters of the array one by one
	//This will give the following:
	/*
	0: 104
	1: 101
	2: 108
	3: 108
	4: 111
	5: 0
	*/
	//The 0 at the end (also can be referenced as '\0') is the null terminator
	//and is a way to know when a string has ended in memory
	for (int i = 0; i < sizeof(text); i++)
	{
		cout << i << ": " << (int)text[i] << endl;
	}

	cout << "\nPointer Output w/ While Loop:" << endl;

	//Make a pointer to the start of the array
	char* pCharacter = text;

	//We can use a reference to the null terminator to traverse it with a while loop
	while (*pCharacter != '\0')
	{
		//'*pCharacter++' will deference pCharacter (*pCharacter) and return the result, and then it will increment pCharacter (pCharacter++) which puts it to the next element
		cout << *pCharacter++ << flush;
	}
	cout << endl;
}
