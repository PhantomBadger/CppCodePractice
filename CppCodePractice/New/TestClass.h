#pragma once
#include <iostream>

class TestClass
{
public:
	TestClass();
	TestClass(const TestClass& other);
	~TestClass();

	void setValue(int value);
	int getValue();
private:
	int value;
};

