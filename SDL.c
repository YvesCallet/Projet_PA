// Yves Callet

#include <SDL.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "fonctions.c"


//Fenetre
#define HAUTEUR 500
#define LARGEUR 500










int main( int argc, char *argv[])
{
  //Initialisation
  SDL_Surface *ecran = NULL;
  SDL_Event event;
  int continuer = 1;
  SDL_Init(SDL_INIT_VIDEO);
  ecran = SDL_SetVideoMode( HAUTEUR, LARGEUR, 32, SDL_HWSURFACE);
  SDL_WM_SetCaption("Projet Yves Callet", NULL);
  
  while (continuer)
  {
    SDL_WaitEvent(&event);
    switch(event.type)
    {
      case SDL_KEYDOWN:
	switch (event.key.keysym.sym)
	{
	  case SDLK_ESCAPE:
	    continuer = 0;
	    break;
	}
	break;
    }
  }
  
  //Fin
  SDL_Quit();
  
  return EXIT_SUCCESS;
}

/* Rectangles
SDL_Surface *rectange = NULL;
rectangle = SDL_CreateRGBSurface( SDL_HWSURFACE, (largeur px), (hauteur px), 32, 0, 0, 0, 0);
SDL_FeeSurface(rectangle);

Appliquer le rectange:

SDL_Rect position;
position.x = coordx;
position.y = coordy;
SDL_BlitSurface(rectangle, NULL, ecran, &position);

*/
