#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestion_sudoku.h"
#include "constantes.h"
#include <uvsqgraphics.h>

SUDOKU lire_fichier (char *nom) 
{
	SUDOKU S;
	FILE*F;
	F = fopen(nom,"r");
	char car;

	for(int i = 8, j=0; i>=0; i--, j=0)
	{
		while(j<9)
		{
			fscanf(F,"%c",&car);
			
			if(car=='.')
			{
				S.valeur_grille_modif[i][j]=0;
				S.valeur_grille[i][j]=0;
				i++;
			}
			else if(car=='*')
			{
				S.valeur_grille_modif[i][j]=1;
				fscanf(F,"%c",&car);
				S.valeur_grille[i][j]=atoi(&car);
				i++;
			}
			/*else if(car==NULL)
			{
				
			}*/
		}
	}
	fclose(F);
	return S;
	
}

void ecrire_fichier(SUDOKU S) 
{	
	POINT P;
	int i=0;
	int j=0;
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			P.x=(TAILLE_CASE)/2 + TAILLE_CASE*i;
			P.y=(TAILLE_CASE)/2 + TAILLE_CASE*j;
			while(S.valeur_grille[i][j] !=0)
			{
				aff_int(S.valeur_grille[i][j], TAILLE_POLICE, P, COUL_VAL_DEPART);
			}
		}
	}
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
