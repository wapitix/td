#include "constantes.h"
#ifndef __SUDOKU_H
#define __SUDOKU_H

struct sudoku
{
	int valeur_grille[N][N];
	int valeur_grille_modif[N][N];
	
	
};

typedef struct sudoku SUDOKU;

SUDOKU initialiser_sudoku();
SUDOKU jouer(SUDOKU S);
SUDOKU sudoku_modifier_case(SUDOKU S, int i, int j);


#endif
