// ArraysAndFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

void showArray1(std::string texts[])
{
	using namespace std;

	//By passing an array into a function as a parameter we lose what size it is, so performing the following will give a different value:
	cout << "Size of Array in Function 1: " << sizeof(texts) << endl;
}

void showArray2(std::string texts[], const int nElements)
{
	using namespace std;

	//To get around losing the length value, we can pass the length of the array in as an argument also
	cout << "Elements in Array in Function 2: " << nElements << endl;
}

//Passing in an array as the parameter (As seen in showArray1 and showArray2), is the same as passing in a pointer to the first value.
//This is why the sizeof in showArray1 gives '4' as this is the size of a pointer
//Even if we put something like `std::string texts[4]` as the parameter, the '4' will be ignored.
void showArray3(std::string* texts, const int nElements)
{
	using namespace std;

	//To get around losing the length value, we can pass the length of the array in as an argument also
	cout << "Output of Array Elements in Function 3" << endl;
	for (int i = 0; i < nElements; i++)
	{
		cout << "Element " << i << ": " << texts[i] << endl;
	}
}

//One way to pass in the length data of the array is to pass in a reference to the array
//However, doing it this way, you must specify in the parameter the amount of elements expected in the array
void showArray4(std::string(&texts)[6])
{
	using namespace std;

	//We can now calculate the length appropriately
	int length = sizeof(texts) / sizeof(std::string);

	cout << "Size of Array in Function 4: " << sizeof(texts) << endl;
}

//A Global Variable Declaration
std::string numbers[] = { "one", "two", "three" };
std::string* getArray()
{
	using namespace std;

	//We cant return pointers to local variables, the following would not work
	/*
	string texts[] = { "one", "two", "three" };
	return texts;
	*/

	//Global variables can have pointers to them returned however!
	return numbers;
}

char* getMemory()
{
	//However, we can return pointers to local variables placed on the HEAP, but that memory must be deleted later using 'delete [] pMem'
	char* pMem = new char[100];
	return pMem;
}

void freeMemory(char* pMem)
{
	delete[] pMem;
}

//An example project showing passing arrays to and from functions
int main()
{
	using namespace std;

	//The names of our D&D party
	string dungeonParty[] = { "Malemut", "Faelyn", "Seebo", "Nim", "Val", "Tyrig" };
	int length = sizeof(dungeonParty) / sizeof(std::string);

	cout << "Size of Array in Main: " << sizeof(dungeonParty) << endl;

	cout << endl;

	showArray1(dungeonParty);

	cout << endl;

	showArray2(dungeonParty, length);

	cout << endl;

	showArray3(dungeonParty, length);

	cout << endl;

	showArray4(dungeonParty);

	//This is an example of passing arrays back and forth using heap allocation
	//This is also a common practice for memory allocation and deallocation
	char* pMemory = getMemory();
	freeMemory(pMemory);
}
