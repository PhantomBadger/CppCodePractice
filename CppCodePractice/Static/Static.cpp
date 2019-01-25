// Static.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

//This would normally be in the .h file
class Test
{
public:
	//Initialized in the cpp file
	static std::string name;

	//Constants have to be initialized when declared, however
	static int const MAX_COUNT = 99;

public:
	static void HelloWorld() { std::cout << "Hello, World! My name is " << name << std::endl; }
	static void SetName(std::string name) { Test::name = name; }

	void MyCount() { std::cout << "My Count value is: " << count << std::endl; }
	void SetCount(int count) { this->count = count; }
private:
	//Every instance of Test would have it's own 'count' value
	int count = 0;
};

//This would normally be in the .cpp file
std::string Test::name = "Frank";


//An example project illustrating the use of the 'static' keyword
int main()
{
	Test t1;
	t1.SetCount(15);

	Test t2;
	t2.SetCount(26);

	t1.MyCount();
	t2.MyCount();

	//Since name is static, we're setting the name for ALL Test objects
	t1.SetName("John");
	t2.SetName("Emma");

	//The static method can be called from each instance or outside of the instance
	//This method outputs the static name value, which is shared amongst all instances of that class
	t1.HelloWorld();
	t2.HelloWorld();
	Test::HelloWorld();

	std::cout << "t1: " << t1.MAX_COUNT << " | t2: " << t2.MAX_COUNT << " | Test:: " << Test::MAX_COUNT << std::endl;
}

