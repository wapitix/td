#include <stdio.h>
#include <stdlib.h>
#include "mes_types.h"
#include <unistd.h>



TABINT gen_alea_tabint (int N, int K)
{
	srand(getpid());
	TABINT Tablo;
	Tablo.T= malloc(N*sizeof(int));
	Tablo.N=N; 
	
	for(int i=0;i<Tablo.N;i++)
	{
		Tablo.T[i]=rand()%K;
	}
	return Tablo;
}


void sup_tabint(TABINT Tablo)
{
	free(Tablo.T);
}		


void aff_tabint(TABINT Tablo)
{
	for(int i=0;i<Tablo.N;i++)
	{
		printf("%d\n",Tablo.T[i]);
	}
}


void ech_tabint(TABINT Tablo, int i)
{
	if(Tablo.T[i] > Tablo.T[i+1])
	{
		int temp = Tablo.T[i];
		Tablo.T[i] = Tablo.T[i+1];
		Tablo.T[i+1]=temp;
		printf("\n");
	}
}


void scan_ech_tabint (TABINT Tablo,int fin)
{
	for(int i=0;i<fin-1;i++)
	{
		ech_tabint(Tablo,i);
	}	
}


void tri_bulle_tabint(TABINT Tablo)
{
	for(int i=Tablo.N;i>0;i--)
	{
		scan_ech_tabint(Tablo,i);
	}

}

int main()
{	
	
	TABINT tab=gen_alea_tabint(10,1000);
	
	nombre_echange=0;
	nombre_comparaisons=0;
	tri_bulle_tabint(tab);
	aff_tabint(tab);
	printf("nombre d'échange: %d, nombre de comparaisons:  %d \n", nombre_echange,nombre_comparaisons);
	sup_tabint(tab);
	
	return 0;
}


