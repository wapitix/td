#include <stdio.h>
#include <stdlib.h>


struct list {
	int val;	//valeur stockee
	struct liste *suivi;	//pointeur vers le suivant
};

//permet de dire que un pointeur est nulle = NULL


int main()
{
	struct liste*l=NULL;
	l=malloc(sizeof(struct list));
	//la fleche veut dire "suit le pointeur et va voir le champ sur lequel ca pointe
	l->val=17;
	l->suiv=NULL;
	
	
	exit(0);
}
