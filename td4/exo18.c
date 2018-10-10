#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//VOIR PHOTOS TEL POUR CHAQUE QUESTION

int longueur(char* chaine)
{
	for(int i=0;1;i++)
	{
		if(chaine[0]=='\0')
		return i;
	}
	return 0;
}

int main(int argc, char** argv)
{
	int i;
	for(i=0;i<argc;i++)
	{
		printf("la %d ième contient %d caractères \n", i,longueur(argv[i]));
	}
	return 0;	
}

