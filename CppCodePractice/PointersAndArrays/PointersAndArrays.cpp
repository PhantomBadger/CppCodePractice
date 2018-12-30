// PointersAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//An example project which uses pointers in conjunction with arrays
int main()
{
	using namespace std;

	//The names of our D&D party
	string dungeonParty[] = { "Malemut", "Faelyn", "Seebo", "Nim", "Val", "Tyrig" };

	//The following correctly identifies the amount of elements in the array, despite the strings being different lengths
	//this indicates that 'string' is a set size, and does not change with variance of string length
	int dungeonPartySize = sizeof(dungeonParty) / sizeof(string);
	cout << "The size of the dungeon party is: " << dungeonPartySize << endl;

	cout << "Traversing the Array without pointers using the '[]' operators (dungeonParty[i]):" << endl;
	for (int i = 0; i < dungeonPartySize; i++)
	{
		cout << "Party member number " << i << " is: " << dungeonParty[i] << endl;
	}

	//Alternatively we can make a pointer that points to the first element of the array and use the [] operators to reference bits of memory at established offsets
	//(The offset size is the size of the type the pointer is referencing)
	cout << "\nTraversing the Array with pointers using the '[]' operators (pDungeonParty[i]):" << endl;

	//One of the differences between a pointer and an array is that an array knows how many elements it cares about, a pointer doesn't.
	//However their similarities mean we can assign them directly like this
	string* pDungeonParty = dungeonParty;
	for (int i = 0; i < dungeonPartySize; i++)
	{
		//We can also access members using a pointer and the same '[]' operators
		cout << "Party member number " << i << " is: " << pDungeonParty[i] << endl;
	}

	//Alternatively again we can make the pointer traverse the array directly
	cout << "\nTraversing the Array with pointers via incrementing (pDungeonParty++):" << endl;

	//We increment the pointer's memory by the size of it's references type through 'pDungeonParty++' which will cause it to reference the next value in the array
	for (int i = 0; i < dungeonPartySize; i++, pDungeonParty++)
	{
		//However, since the pointer is incremented, after this for loop we would not be able to iterate again without first resetting the pointer to the original address
		cout << "Party member number " << i << " is: " << *pDungeonParty << endl;
	}

	//If we wish to reference specific elements of the array we still need to use the ampersand to get it's address
	//The '[]' operator has a higher precedence than '&' but the brackets are added for clarity
	string* pFirstMember = dungeonParty; //Same as &(dungeonParty[0])
	string* pLastMember = &(dungeonParty[dungeonPartySize - 1]);


	return 0;
}