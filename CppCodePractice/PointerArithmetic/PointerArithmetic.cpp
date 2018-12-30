// PointerArithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//An example of a project that showcases Pointer Arithmetic, this is a follow-on from 'PointersAndArrays'
//and so repeated concepts will not be commented as heavily
int main()
{
	using namespace std;

	//The names of our D&D party
	string dungeonParty[] = { "Malemut", "Faelyn", "Seebo", "Nim", "Val", "Tyrig" };
	int dungeonPartySize = sizeof(dungeonParty) / sizeof(string);

	//Pointer to the start of the array
	string* pDungeonParty = dungeonParty;

	//Pointer to the end of the array
	string* pLastPartyMember = &(dungeonParty[dungeonPartySize - 1]);

	//We can iterate over the array using the endMember pointer as our reference of when to stop
	cout << "Using Pointer Addition to Iterate over an Array:" << endl;
	while (true)
	{
		cout << *pDungeonParty << endl;

		if (pDungeonParty == pLastPartyMember)
		{
			break;
		}

		pDungeonParty++;
	}

	//We can also use subtraction (in this case to go backwards)
	string* pFirstPartyMember = dungeonParty;
	cout << "\nUsing Pointer Subtraction to Iterate in reverse over an Array:" << endl;
	while (true)
	{
		cout << *pDungeonParty << endl;

		if (pDungeonParty == pFirstPartyMember)
		{
			break;
		}

		pDungeonParty--;
	}

	//Pointer arithmetic can also be used to identify how many elements are inbetween two pointers
	cout << "\nUsing Pointer Subtraction to identify how many elements are between two pointers: " << endl;

	//Pointers essentially deal in the size of the type they are assigned, so subtracting like this will tell us how many times a 'string' could fit between the two addresses
	//Since arrays are in contiguous memory we can use this to identify how many elements there are
	long elements = (long)(pLastPartyMember - pFirstPartyMember);
	cout << "Number of Party Members: " << elements << endl;

	//This gets the middle party member
	cout << "\nUsing Arithmetic to set a pointer to the middle element of an array:" << endl;

	//Since 'dungeonPartySize' is an int, it will give a whole number when divided by an int
	string* pMiddlePartyMember = pFirstPartyMember + (dungeonPartySize / 2);
	cout << "Middle Party Member: " << *pMiddlePartyMember;

}
