#pragma once
#include <iostream>

//With a namepsace, we can have multiple classes with the same names
//and the same implementations, we can then reference different ones using the namespace as a prefix
//It helps avoid conflicts with identically named classes
namespace ExampleNamespace
{
	class Bird
	{
	public:
		Bird();
		~Bird();
		void scream();
	};
}

class Bird
{
public:
	Bird();
	~Bird();
	void scream();
};

