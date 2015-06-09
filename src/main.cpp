#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "Bataille.cpp"

using namespace std;

int main()
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_WM_SetCaption("Bataille navale", NULL);

	
	Bataille game;
	game.play();
	
	SDL_Quit();
	return 0;
}
