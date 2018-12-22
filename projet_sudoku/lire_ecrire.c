#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestion_sudoku.h"
#include "constantes.h"


SUDOKU lire_fichier (char *nom) 
{	
	SUDOKU S;
	FILE *F;
	F=fopen(nom,"r");
	char thomas ;
	int i ,j;

	j=N-1;

	while (j>=0)
	{
		i=0;

		while (i<N)
		{
			fscanf(F,"%c",&thomas);

			if(thomas == '.')
			{
				S.valeur_grille_modif[i][j]=1;
				S.valeur_grille[i][j]=0;
				i++;
			}

			else if(thomas =='*')
			{
				S.valeur_grille_modif[i][j]=0;
				fscanf(F,"%c",&thomas);
				 S.valeur_grille[i][j]=atoi(&thomas);
				i++;
			}

			else if (thomas =='\n')
			{
				
			}

			else
			{
				S.valeur_grille_modif[i][j]=1;
				S.valeur_grille[i][j]=atoi(&thomas);
				i++;
			}                                      
		}
		j--;
	}
fclose(F);
return S;
}


void ecrire_fichier(SUDOKU S) 
{	
	

}



































//ca c est le code de base sans le truc de wissam 
/*SUDOKU lire_fichier (char *nom) {
	SUDOKU S;
	char caractere;
	int i=8; //axe y 
	int j=0; //axe x
	FILE *F;
	F= fopen(nom, "r");
	while(i>=0)
	{
		while(j<9)
		{
			fscanf(F,"%c",&caractere);
			switch(caractere)
			{
				case
					S.T[i][j].valeur=0;
					j++;
					break;
				case
					S.T[i][j].modifiable=0;
					break;
				default :
					S.T[i][j].valeur= atoi(&caractere);
					break;
			}
		}
	}
	return S;
}

void ecrire_fichier(SUDOKU S) {
}
*/
