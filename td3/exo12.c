#include <stdio.h>
#include <stdlib.h>

void plusun (int a, int *T)
{
		a=a+1;
		T[0] = T[0] +1;
}


int main()
{
	int a;
	int T[10];
	a=7;
	T[0] = 12;
	printf("T[0] vaut %d et a vaut %d \n", T[0], a);
	plusun(a,T);
	printf("T[0] vaut %d et a vaut %d \n", T[0], a);
	
	
	
}


