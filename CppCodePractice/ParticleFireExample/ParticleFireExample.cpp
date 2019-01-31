// ParticleFireExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//An example project that shows an example SDL application with some particle fire simulations.
//Derived from John Purcell's Cave of Programming series

//On Windows, the main function must have the arguments below, otherwise we get a Linker error with SDL
int main(int argc, char *argv[])
{
	using namespace std;
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 600;

	//Initialise SDL, passing in the video flags.
	//If it returns a value less than 0 it means it has not succeeded
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
		return 1;
	}

	cout << "SDL Initialization Successful!" << endl;

	//Creates an SDL Window
	// Name of the Window
	// Position of the Window (X)
	// Position of the Window (Y)
	// Width of the Window
	// Height of the Window
	// Window Flags (https://wiki.libsdl.org/SDL_WindowFlags)
	SDL_Window* window = SDL_CreateWindow("Particle System", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

	//If SDL cant create the window for whateve reason, window will be null
	if (window == NULL)
	{
		cout << "Window could not be made. SDL Error: " << SDL_GetError();
		SDL_Quit();
		return 2;
	}

	//The start of our game loop
	bool runGameLoop = true;
	SDL_Event currentEvent;
	while (runGameLoop)
	{
		//For our Particle System application we will need to do the Following in here:
		// - Update Particles
		// - Draw Particles
		// - Check for Messages/Events (User Input/Window Actions)

		//SDL_PollEvent will return 1 if there are events, 0 if there arent
		//1 equated to true, 0 to false, so if there is an event we will continue into the while loop
		//We pass in the address of an event variable for the function to populate for us
		while (SDL_PollEvent(&currentEvent))
		{
			//If we got here it means that there is an event, and 'currentEvent' will be populated
			//Check to see if the event raised was an SDL_QUIT event, which is called when we click the 'x' in the corner of the window
			if (currentEvent.type == SDL_QUIT)
			{
				runGameLoop = false;
			}
		}
	}

	//====Perform Cleanup====
	//Destroy the Window, since we made it before
	SDL_DestroyWindow(window);
	//Call SDL_Quit when exiting the project to ensure correct cleanup
	SDL_Quit();

	return 0;
}
