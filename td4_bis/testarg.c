#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	int i;
	double somme=0;
	for(i=0; i<argc ; i++)
	{
		somme+=atof(argv[i]);
	}
		printf("%f \n" , somme);
	
	if(isdigit(somme)==0)
	{
		printf("%f\n",somme);
	} 
	else
	return 0;

}

//le isdigit() permet de verifier si le chiffre est un int ou un float, il va renvoyer un 0 si c est un float(45.3) car il y a une virgule dans le chiffre, alors que si c est un int(45) il va renvoyer 1, il faut donc utiliser un IF
