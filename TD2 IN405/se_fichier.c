#include "se_fichier.h"
#include <stdio.h>
#include <stdlib.h>

SE_FICHIER SE_ouverture(const char*chemin, int acces)
{
	
	SE_FICHIER f;
	f.descripteur=fd;
	f.descripteur= open(chemin, acces, 0766);
	f.chemin=chemin;
	f.acces=acces;
	return f;
}

int SE_fermeture(SE_FICHIER fichier)
{
	return close(fichier, descripteur);
}

int SE_suppression(const char*chemin)
{
	return remove(chemin);
}

int SE_ecritureCaractere(SE_FICHIER fichier, const char caractere)
{
	
}
