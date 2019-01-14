// Namespaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Bird.h"

//An example project illustrating namespaces
int main()
{
	//A namespace is a way of avoiding conflict and categorizing functionality
	using namespace std;

	//We can arbitrarily make a scope with parenthesis to control when stack objects are destroyed
	{
		//No Namespace
		Bird bird;
		bird.scream();
	}

	cout << endl;

	{
		//We could use
		/*
				using namespace ExampleNamespace;
				Bird bird;
		*/
		//But since we have a 'Bird' implementation that's NOT in a namespace
		//which one we're referencing would be ambiguous, so we would still need to explicitly reference it

		ExampleNamespace::Bird bird2;
		bird2.scream();
	}
}
