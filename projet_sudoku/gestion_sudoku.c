#include <stdlib.h>
#include "gestion_sudoku.h"

SUDOKU sudoku_modifier_case(SUDOKU S, int i, int j)
{
	if(S.valeur_grille_modif[i][j]==1)
	{
		S.valeur_grille[i][j]= ((S.valeur_grille[i][j]+1)%10);	
	}
	/*a chaque clic sur une case modifiable on rajoute +1, et 
	modulo 10 pour pas que les valeurs depasse la valeur de 10*/
	
return S;
}
