#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestion_sudoku.h"
#include "constantes.h"


SUDOKU lire_fichier (char *nom) 
{	
	SUDOKU S;
	FILE *F; //Lis le fichier
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

	/*si c est un point la valeur de la case prend 0(invisible)*/
			if(thomas == '.') 
			{
				S.valeur_grille_modif[i][j]=1;
				S.valeur_grille[i][j]=0;
				i++;
			}
	/*pointe sur les valeurs du texte que l'on ne peut pas modifier et 
	qui changent de couleur */
			else if(thomas =='*') 
			{
				S.valeur_grille_modif[i][j]=0;
				fscanf(F,"%c",&thomas); 
	/*autre fscanf pour prendre la valeur qui est a droite 
	de l'etoile pour la mettre dans la case non modifiable*/
				 S.valeur_grille[i][j]=atoi(&thomas);
				i++;
			}

	/*si ya rien ba on met rien*/
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


/*où on met la sauvegarde*/
void ecrire_fichier(SUDOKU S) 
{	
	

}
