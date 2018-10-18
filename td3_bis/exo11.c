#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Taille int %ld \n", sizeof(int));
	printf("Taille int %ld \n", sizeof(char));
	printf("Taille int %ld \n", sizeof(double));
	printf("Taille int %ld \n", sizeof(char*));
	printf("Taille int %ld \n", sizeof(void*));
	printf("Taille int %ld \n", sizeof(int*));
	printf("Taille int %ld \n", sizeof(double*));
	printf("Taille int %ld \n", sizeof(int**));
	printf("Taille int %ld \n", sizeof(int[10]));
	printf("Taille int %ld \n", sizeof(char[7][3]));
	printf("Taille int %ld \n\n\n", sizeof(int[2]));
	
float tab[10];


	printf("Taille int %ld \n", sizeof(tab));
	printf("Taille int %ld \n", sizeof(tab[0]));
	printf("Taille int %ld \n", sizeof(&tab[0]));
	printf("Taille int %ld \n", sizeof(*&tab));
	printf("Taille int %ld \n", sizeof(*&tab[0]));

	
	
	
return 0;	
}
