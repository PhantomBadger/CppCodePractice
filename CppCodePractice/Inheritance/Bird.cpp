#include "pch.h"
#include "Bird.h"

Bird::Bird()
{
}

Bird::~Bird()
{
}

void Bird::makeNoise()
{
	using namespace std;
	cout << "Caw!" << endl;
}

void Bird::fly()
{
	using namespace std;
	cout << "Bird " << name << " is Flying!" << endl;
}
