// InitializationLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Person.h"

//An example solution making use of initialization lists
//Comments in the Person.cpp file explain the efficiencies of them
int main()
{
	using namespace std;
	
	//Make an instance of a person on the stack
	Person person("Josh", 24, 1994, true);

	//Output the status of that person
	cout << person.toString() << endl;

    return 0;
}

