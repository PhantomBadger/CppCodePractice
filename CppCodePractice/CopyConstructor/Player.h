#pragma once
#include <iostream>
#include <string>

//An In-line class created to quickly showcase copy constructors
class Player
{
public:
	//Default Constructor

	//This is called in the instance of
	//	Player player1; //Stack Allocation
	//or
	//	Player player1 = new Player(); //Heap Allocation
	Player() { std::cout << "Player Created using Default Constructor" << std::endl; }

	//Copy Constructor
	//This is implicitly generated, but we can explicitly declare it using a const reference to our type (See the 'References' project for more info)
	//If we explicitly declare this copy constructor, it will no longer use the implicit version, and so we must be sure to correctly copy over the data ourselves.
	//It's worth noting that since the 'other' is a constant, we cannot change it, which fits with the idea of this ctor only 'copying' the data. 
	//We also cannot call any methods in 'other' that are not 'const' themselves, since we cant guarantee they dont change data.

	//This is called in the instance of
	//	Player player2 = player1; //Stack Allocation
	//or
	//	Player player2 = new Player(player1); //Heap Allocation

	//A more efficient way of writing this would be
	//	Player(const Player& other) : name(other.name), dndClass(other.dndClass)
	//See the 'InitializationLists' project for more info.
	//This approach has been ignored here so we can better illustrate how the copying process works
	Player(const Player& other)
	{
		//Even though 'name' and 'dndClass' are private, we can still reference them in the copy constructor since we are still inside 
		//the 'Player' class even though we're accessing a different instance
		this->name = other.name; 
		this->dndClass = other.dndClass; 
		std::cout << "Player Created using the Copy Constructor" << std::endl;
	}

	//Destructor
	~Player() { std::cout << "Player " << name << " Destroyed" << std::endl; }

	void setName(std::string name) { this->name = name; }
	void setClass(std::string dndClass) { this->dndClass = dndClass; }
	void introduceSelf() { std::cout << "I am " << name << " the " << dndClass << std::endl; }
private:
	std::string name;
	std::string dndClass;
};

