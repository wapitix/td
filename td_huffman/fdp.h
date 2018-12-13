#include "arbre.h"

struct element{
  Arbre a;
  int poids;
};
typedef struct element Element;

//la fdp est implemente avec un tableau trie par ordre decroissant sur les poids des elements
struct fdp{
  Element t[128];
 
  int taille;
};
typedef struct fdp Fdp;


Fdp remplit_fdp(int freq[128]);

void affiche_fdp(Fdp f);
	Element fusion(Element el1, Element el2);
	Element extrait(Fdp *f);
	Fdp insere(Fdp f, Element elt);
