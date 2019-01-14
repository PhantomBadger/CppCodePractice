#include "pch.h"
#include "Bird.h"


ExampleNamespace::Bird::Bird()
{
	using namespace std;
	cout << "Example Namespace Bird Made" << endl;
}

ExampleNamespace::Bird::~Bird()
{
	using namespace std;
	cout << "Example Namespace Bird Destroyed" << endl;
}

void ExampleNamespace::Bird::scream()
{
	using namespace std;
	//This is what my bird sounds like...
	cout << "AAAAAAAAAAAAAAA" << endl;
}

Bird::Bird()
{
	using namespace std;
	cout << "No Namespace Bird Made" << endl;
}

Bird::~Bird()
{
	using namespace std;
	cout << "No Namespace Bird Destroyed" << endl;
}

void Bird::scream()
{
	using namespace std;
	//This is what my bird sounds like...
	cout << "Who's a Pretty Boy?" << endl;
}
