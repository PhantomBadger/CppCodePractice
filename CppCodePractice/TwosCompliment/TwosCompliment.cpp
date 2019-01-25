// TwosCompliment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//An example project that shows Twos Compliment and how ints are stored in memory
int main()
{
	using namespace std;

	//variables are signed by default in C++
	//127 is the max value of a char
	char value = 127;
	cout << (int)value << endl;

	//When we increment it, the value in the signed char will loop around to -128
	value++;
	cout << (int)value << endl;

	//This is the same with all integer types in C++, char is just small so easier to show.
	
	//3-bit System:
	//	Max Value: 111 = 7 = (2^3) - 1
	//8-bit System (Unsigned Char):
	//	Max Value: 11111111 = 255 = (2^8) - 1
	//However, if we want to have signed values, we use a method called 'Twos Compliment'
	//If the leftmost (Most Significant Bit) is 1, it represents a negative number
	//To convert to and from Two's Compliment, we invert all the bits, and add 1
	//eg 127 in binary is
	//	01111111
	//Invert it
	//	10000000
	//Add 1
	//	10000001
	//This represents -127, with 128 being (10000000)

	return 0;
}