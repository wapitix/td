#include <stdio.h>
#include <stdlib.h>


struct liste {
	int val;	//valeur stockee
	struct liste *suiv;	//pointeur vers le suivant
};

//permet de dire que un pointeur est nulle = NULL


void affiche_iter(struct liste*l)
{
	while(l !=NULL)
	{
		printf("%d\n",l->val);
		l=l->suiv;
	}	
}



void affiche_rec (struct liste*l)
{
	if(l !=NULL)
	{
		printf("%d",l->val);
		affiche_rec(l->suiv);
	}
}

int nb_elem_iter (struct liste *l)
{
	int cmpt=0;
	while(l!=NULL)
	{
		cmpt ++;
		l=l->suiv;
	}
return 0;
}

int nb_elem_rec (struct liste *l)
{
	if(l!=NULL)
	{
		return 1 + nb_elem_rec(l->suiv);
	}
	return 0;
}


int est_present_iter (struct liste *l, int val)
{
	while(l!=NULL)
	{
		if(l->val==val)
		{
			return 1;
		}
		l=l->suiv;
	}
	return 0;
}

int est_present_rec (struct liste *l, int val)
{
	if(l!=NULL)
	{
		return(l->val==val);
		est_present_rec(l->suiv, val);
	}
		return 0;
}

int main()
{
	//la fleche veut dire "suit le pointeur et va voir le champ sur lequel ca pointe 
	
	struct liste*l=NULL; //qust a
	l=malloc(sizeof(struct liste));	//qust b

	struct liste *thomas=malloc(sizeof(struct liste));	//qst d
	
	struct liste*t=malloc(sizeof(struct liste));	//qst c
	
	
	l -> val=17;  //qst b
	l -> suiv=NULL; //qst b
	     
	t -> val=23;  
	t -> suiv= thomas;	
	
	thomas -> val=42;  
	thomas -> suiv= l;
	
	printf("%d", nb_elem_rec(l));
	affiche_iter(l);
	affiche_rec(l);
	
	
	
	
	exit(0);
}
