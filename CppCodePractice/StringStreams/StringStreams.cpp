// StringStreams.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//An example project making use of string streams 
//to combine different type of data
int main()
{
	string name = "Emma";
	int age = 23;

	//use the 'put-to' operator, also called stream insertion
	//to add the data we want into the stream
	stringstream ss;
	ss << name;
	ss << " is ";
	ss << age;
	ss << " years old";
	
	//the .str() method returns a string of the passed in data
	cout << ss.str() << endl;

    return 0;
}

