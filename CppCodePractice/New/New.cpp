// New.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "TestClass.h"

void createTestStack()
{
	using namespace std;

	cout << "Allocating on the Stack" << endl;

	//This object is instantiated on the STACK, which means when we exit the scope it will be destroyed and the memory freed. 
	TestClass test;
	test.setValue(25);

	//It will be destroyed here
	return;
}

TestClass* createTestHeap()
{
	using namespace std;

	cout << "Allocating on the Heap" << endl;
	//This object is instantiated on the HEAP, which means it will stay allocated untilwe destroy it ourselves. This could cause a memory leak if we dont
	TestClass* test = new TestClass;
	test->setValue(36);
	return test;
}

//An example illustrating the use of 'new' and Heap/Stack allocation
int main()
{
	using namespace std;

	createTestStack();

	cout << endl;

	//The TestClass instance stays even though it's made outside of this scope
	TestClass* heapTest = createTestHeap();
	cout << heapTest->getValue() << endl;

	//Calling 'delete' terminates the pointer and frees up the memory used by the value given, it is how we free up value specified on the HEAP
	//Every call of new should have it's own 'delete'
	delete heapTest;

	return 0;

}
