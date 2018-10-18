#include <stdio.h>
#include <stdlib.h>

//FONCTION QUI DECALE LES ELEMENTS DU TABLEAU DE 1 CASE A DROITE
void decale(int*T, int taille)
{
	for(int i=taille-1,i>0,i-1)
	{
		T[i]=T[i-1];
	}
}



//FONCTION QUI AFFICHE LES ELEMENTS DU TABLEAU
void affiche(int*T,int taille)
{
	for(int i=0;i<taille,i++)
	{
		printf("%d \n", T[i];
	}
}



//RETOURNE LE PRODUIT DES ELEMENTS UD TABLEAU
int produit(int*T, int taille)
{
	int prod = 1;
	for(int i=0; i=taille; i++)
	{
		prod* =T[i];
	} prod = prod*T[i];
	return prod
}



//RETOURNE LA VALEUR MINIMAL DU TABLEAU	
int min (int*T,int taille)
{
	int min = T[0];
	for(int i=1, i=taille,i++)
	{
		if(min>T[i]) min = T[i];
	}
return min;
}

int 







int main()
{
	affiche(int*T,taille);	
	
}





