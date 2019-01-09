#pragma once
#include <iostream>
#include <string>

class Animal
{
public:
	Animal()
	{
		using namespace std;
		cout << "Animal created using Default Ctor" << endl;
	}

	Animal(const Animal& other)
	{
		using namespace std;
		cout << "Animal created using Copy Ctor" << endl;

		this->name = other.name;
	}

	~Animal()
	{
		using namespace std;
		cout << "Animal with name " << name << " destroyed using dtor" << endl;
	}

	void setName(std::string name)
	{
		this->name = name;
	}

	void speak()
	{
		using namespace std;
		cout << "I am an Animal called " << name << endl;
	}

	//An example of a function that returns an instance of an object on the STACK
	static Animal createAnimalOnStack(std::string name)
	{
		Animal animal;
		animal.setName(name);
		return animal;
	}

	//An example of a function that returns a reference to an object made on the STACK
	//This will NOT WORK! as animal is destroyed when leaving this scope
	static Animal& createAnimalWithReference(std::string name)
	{
		Animal animal;
		animal.setName(name);
		return animal;
	}

	//An example of a function that returns a pointer to an object made on the HEAP
	//Because 'new' is used, pAnimal is pointing to HEAP memory, which remains after leaving the scope
	//We must call delete somewhere else because of this
	static Animal* createAnimalWithPointer(std::string name)
	{
		Animal* pAnimal = new Animal();
		pAnimal->setName(name);
		return pAnimal;
	}
private:
	std::string name;
};
