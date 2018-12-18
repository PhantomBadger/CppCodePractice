// CppCodePractice.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Palindrome.h"

int main()
{
	std::string input;

	//Get user input
	std::cout << "Enter a string: " << std::endl;
	std::cin >> input;

	//Get Result
	bool result = Palindrome::IsPalindrome(input);

	//Output Result
	std::cout << "It " << (result ? "is" : "isn't") << " a Palindrome!" << std::endl;

    return 0;
}

