//Yves Callet

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct Piece
{
  char nom;
  int largeur;
  int hauteur;
  bool grille;
  bool ok;
  int forme[5][5];
};

typedef struct Piece piece;

struct Table
{
  char nom;
  int nbLigne;
  int nbColonnes;
  bool remplie;
};

typedef struct Table table;

piece Piece_ini( char nom, int largeur, int hauteur, int forme[5][5] );
table Table_ini( char nom, int lig, int col );

