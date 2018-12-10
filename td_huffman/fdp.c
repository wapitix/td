#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"


int *frequence(char* nomFic){
	int *frequence=calloc(128*sizeofint);//calloc permet de creer de l espace et au lieu de mettre cet espace vide il va y mettre que des 0 dedans
	FILE*F=fopen(nomFic,"r");
	fscanf(F,"%c",&nombre_caract);
	
	int c= fgetc(f);
	
	while(c!==EOF) //eof= end of file
	{
		freq[c]++;
		c= fgetc(f);
	}
	
	for(int i=0;i<128;i++)
	{
		if(!freq[i]) {
			printf("%c %d",i,freq[i]);
		}
	}
	return freq;
}

