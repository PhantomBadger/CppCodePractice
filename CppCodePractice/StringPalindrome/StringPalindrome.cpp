// StringPalindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Palindrome.h"

//An example project that tests whether a string is a Palindrome or not
//Was made based on a common interview question
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

