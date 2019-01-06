// CopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Player.h"

//An example project illustrating Copy Constructors
int main()
{
	//We have put cout in the default constructor of 'Player'
	//We can see this gets called here
	Player player;
	player.setClass("Paladin");
	player.setName("Josh");

	//But doesn't get called here
	Player player2 = player;
	player2.setName("Emma");

	//However, here we can see that player & player2 are still separate objects, ie, 'player2.setName("Emma");' ahs not changed the name of player
	player.introduceSelf();
	player2.introduceSelf();

	//This is because it is calling the 'Copy' constructor, additional information is present in Player.h
}
