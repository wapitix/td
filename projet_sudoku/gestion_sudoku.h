
#ifndef __SUDOKU_H
#define __SUDOKU_H

struct valeur_case{
	int valeur;
	int modifiable;
};


struct sudoku {
	struct valeur_case T[9][9];
};

typedef struct sudoku SUDOKU;

#endif
