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


void affiche_Piece( piece p, int x, int y)
{
  SDL_Surface *rectangle = NULL;
  rectangle = SDL_CreateRGBSurface( SDL_HWSURFACE, 50, 50, 32, 0, 0, 0, 0);
  SDL_Rect position;
  position.x = x;
  position.y = y;
  int k;
  int i;
  for(k=0;k==4;k=k+1)
  {
    for(i=0;i==4;i=i+1)
    {
      if (p.forme[k][i] == 1)
      {
	SDL_FillRect(rectangle, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
	SDL_BlitSurface(rectangle, NULL, ecran, &position);
      }
      else
      {
	position.x = position.x+50;
      }
    }
    position.x = x;
    position.y = position.y + 50;
  }
}







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
SDL_FillRect(rectangle, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
SDL_BlitSurface(rectangle, NULL, ecran, &position);

*/
