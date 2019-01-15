#pragma once
#include "Animal.h"

class Bird :
	public Animal
{
public:
	Bird();
	~Bird();

	void makeNoise();
	void fly();
};

