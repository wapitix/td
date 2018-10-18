#include <stdio.h>
#include <stdlib.h>
#include "mes_types.h"
#include <unistd.h>

//question 19.B

TABINT gen_alea_tabint (int N, int K)
{
	srand(getpid());
	TABINT Tablo;
	Tablo.T= malloc(N*sizeof(int));
	Tablo.N=N; //declare un tableau de N entiers
	
	for(int i=0;i<Tablo.N;i++)
	{
		Tablo.T[i]=rand()%K;
	}
	return Tablo;
}


//question C
void sup_tabint(TABINT Tablo)
{
	free(Tablo.T);
}		

//question D
void aff_tabint(TABINT Tablo)
{
	for(int i=0;i<Tablo.N;i++)
	{
		printf("%d\n",Tablo.T[i]);
	}
}

//question E
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

//question F
void scan_ech_tabint (TABINT Tablo,int fin)
{
	for(int i=0;i<fin-1;i++)
	{
		ech_tabint(Tablo,i);
	}	
}

//question H
void tri_bulle_tabint(TABINT Tablo)
{
	for(int i=Tablo.N;i>0;i--)
	{
		scan_ech_tabint(Tablo,i);
	}

}

int main()
{	
	//question C
	TABINT tab=gen_alea_tabint(10,1000);
	//question D
	aff_tabint(tab);
	//question E
	ech_tabint(tab,5);
	aff_tabint(tab);
	//question F
	scan_ech_tabint(tab,10);
	//question H
	tri_bulle_tabint(tab);
	
	aff_tabint(tab);
	
	sup_tabint(tab);
	
	return 0;
}


