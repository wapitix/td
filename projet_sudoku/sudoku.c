#include <stdlib.h>
#include <uvsqgraphics.h>
#include "constantes.h"
#include "afficher.h"
#include "gestion_sudoku.h"
#include "lire_ecrire.h"


SUDOKU jouer(SUDOKU S)
{
	POINT P = wait_clic();
	
	if(P.y<HAUTEUR-TAILLE_CASE)
	{
		/*les int colonne et ligne permettent de touvre la case en 
		abcisse et ordonee du point P que l on a cliqué*/
		int ligne= P.x/TAILLE_CASE; 
		int colonne= P.y/TAILLE_CASE; 
		S = sudoku_modifier_case(S,ligne,colonne);
	}

return S;
}

int main (int argc, char *argv[]) 
{
	//main du prof
	SUDOKU S;
	S = lire_fichier(argv[1]);
	initialiser_fenetre_graphique();
	sudoku_afficher(S);
	while (1) 
	{
		S = jouer(S);
		sudoku_afficher(S);
	}
	terminer_fenetre_graphique();
	exit(0);
}


