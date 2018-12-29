#pragma once
#include <string>
#include <locale>

class Palindrome
{
public:
	Palindrome();
	~Palindrome();
	static bool IsPalindrome(std::string testString);
};

