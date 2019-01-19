// ConstructorInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Machine
{
private:
	int id;

public:
	Machine() : id(64) { std::cout << "Machine No Arg Ctor" << std::endl;  }
	Machine(int id) : id(id) { std::cout << "Machine ID Arg Ctor" << std::endl; }
	void showInfo() { std::cout << "ID: " << id << std::endl; }
};

class Vehicle : public Machine
{
public:
	Vehicle() { std::cout << "Vehicle No Arg Ctor" << std::endl; }
	Vehicle(int id) : Machine(id) { std::cout << "Vehicle ID Arg Ctor" << std::endl; }
};

class Car : public Vehicle
{
public:
	Car() { std::cout << "Car No Arg Ctor" << std::endl; }
};

class TestCar : public Vehicle
{
public:
	TestCar() : Vehicle(9001) { std::cout << "TestCar No Arg Ctor" << std::endl; }
};

//An example project showing some of the nuances of Inheritance and Constructors
int main()
{
	//Machine ctor is called, then Vehicle ctor
	//Since Vehicle extends Machine, C++ calls the Machine ctor first before then calling the Vehicle ctor
	//C++ calls the ctors of all super classes before calling the ctor for the derived class
	Vehicle vehicle;

	//We can confirm this by seeing that 'id' is set to '64'
	vehicle.showInfo();

	std::cout << std::endl;

	//C++ calls the ctors of all derived objects from the base superclass down, as Machine is an indirect superclass
	Car car;
	car.showInfo();

	std::cout << std::endl;

	//We can call the ID Ctor of Machine
	Machine machine(123);
	machine.showInfo();

	std::cout << std::endl;

	//But cannot call it through vehicle unless we give Vehicle a ctor that specifies which to use
	//Note how the Vehicle(int id) constructor uses an initialiser list to call the Machine ctor
	Vehicle vehicle2(124);
	vehicle2.showInfo();

	//If instead Vehicle's ctor was
	//	Vehicle(int id) { std::cout << "Vehicle ID Arg Ctor" << std::endl; }
	//Then C++ would call the Machine default ctor, then the Parameterized ctor of Vehicle

	std::cout << std::endl;

	//We can also have a default ctor call a specified ctor from it's direct superclass
	TestCar testCar;
	testCar.showInfo();

	//We can't, however, have the TestCar ctor call 'Machines' ctor explicitly, the following would not compile
	//	TestCar() : Machine(id) { std::cout << "etc..." << std::endl; }
}