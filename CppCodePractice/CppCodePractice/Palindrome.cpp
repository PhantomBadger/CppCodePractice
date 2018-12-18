#include "stdafx.h"
#include "Palindrome.h"

Palindrome::Palindrome()
{
}

Palindrome::~Palindrome()
{
}

///
///<summary>Checks whether the provided string is a palindrome. Is case insensitive</summary>
///<param=testString>The string to test</param>
///<returns>True if the string is a palindrome, false if it isn't or is empty</returns>
///
bool Palindrome::IsPalindrome(std::string testString)
{
	//Null check
	if (testString.empty())
	{
		return false;
	}

	//Get the length of the string
	int lengthOfString = testString.length();

	//Create a locale
	std::locale locale;

	//Compare first and last characters of the string, moving closer each time
	for (int i = 0, j = lengthOfString - 1; i < lengthOfString && j >= 0; i++, j--)
	{
		//If they ever differ, it isn't a palindrome
		if (std::tolower(testString[i], locale) != std::tolower(testString[j], locale))
		{
			return false;
		}
	}

	//Otherwise it is
	return true;
}