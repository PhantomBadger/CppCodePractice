// ReversingAString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Reverses the string using chars and array accessors
void ReversingWithoutPointers()
{
	using namespace std;
	cout << "Reversing without pointers:" << endl;

	//Original String
	char text[] = "hello";

	//Get the length of the array, since chars are only one byte, this will give us the length of the array
	//We treat the size as one less so that we ignore the null terminator
	int length = sizeof(text) - 1;
	if (length <= 0)
	{
		cerr << "Error: Length is 0" << endl;
		return;
	}

	cout << "Original String is: " << text << endl;

	//Creates i at the start, j one from the end (to avoid the null terminator)
	//Keeps going as long as:
	//	i is less than the length of the string
	//  j is above zero
	//  and i is below j (as once i mets or exceeds j, they're covering the same ground again)
	//i is incremented, and j is decremented
	for (int i = 0, j = length - 1; i < length && j > 0 && i < j; i++, j--)
	{
		char temp = text[i];
		text[i] = text[j];
		text[j] = temp;
	}

	cout << "Reversed String is: " << text << endl;
}

//Reverses the string using pointers
void ReversingWithPointers()
{
	using namespace std;
	cout << "Reversing withpointers:" << endl;

	//Original String
	char text[] = "hello";

	//Get the length of the array, since chars are only one byte, this will give us the length of the array
	//We treat the size as one less so that we ignore the null terminator
	int length = sizeof(text) - 1;
	if (length <= 0)
	{
		cerr << "Error: Length is 0" << endl;
		return;
	}

	cout << "Original String is: " << text << endl;

	//Create pointers to the first and last element of the array
	char *pStart = text; //The same as `= &text[0]`
	char* pEnd = text + length - 1; //The same as `= &text[length - 1]`

	//We can compare pointers (See PointerArithmetic Project)
	while (pStart < pEnd)
	{
		//Swap the values over, using a temp veriable to save the start value we override
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		//Increment the start and decrement the end
		pStart++;
		pEnd--;
	}

	cout << "Reversed String is: " << text << endl;
}

//An example project illustrating how to reverse a char array without making a second array
int main()
{
	using namespace std;

	ReversingWithoutPointers();

	cout << endl;

	ReversingWithPointers();
}
