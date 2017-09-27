//Yves Callet

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

piece Piece_ini( char nom, int largeur, int hauteur, int forme[5][5] )
{
  piece *p  = (piece *)malloc(sizeof(piece));
  p->nom = nom;
  p->largeur = largeur;
  p->hauteur = hauteur;
  p->forme = forme;
  p->grille = false;
  p->ok = false;
}

table Table_ini( char nom, int lig, int col )
{
  table *t = (table *)malloc(sizeof(table));
  t->nom = nom;
  t->nb_Ligne = lig;
  t->nb_Colonne = col;
  t->remplie = false;
}

