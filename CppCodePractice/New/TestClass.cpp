#include "pch.h"
#include "TestClass.h"


TestClass::TestClass()
{
	using namespace std;
	cout << "Default Constructor Called" << endl;
	value = 0;
}

TestClass::TestClass(const TestClass& other)
{
	using namespace std;
	cout << "Copy Constructor Called" << endl;
	value = other.value;
}

TestClass::~TestClass()
{
	using namespace std;
	cout << "Destructor Called" << endl;
}

void TestClass::setValue(int value)
{
	this->value = value;
}

int TestClass::getValue()
{
	return value;
}
