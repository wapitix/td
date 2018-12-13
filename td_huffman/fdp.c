#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "fdp.h"


//insertion dans tableau trie en decroissant
Fdp insere(Fdp f, Element elt){
  int i,j;
  if(f.taille>=128){
    fprintf(stderr, "Erreur: insertion dans fdp pleine\n");
    exit(EXIT_FAILURE);
  }
  i = 0;
  while(i<f.taille && f.t[i].poids > elt.poids)//insertion triee
    i++;
  for(j=f.taille; j>i; j--)//on decale tout le monde a droite
    f.t[j] = f.t[j-1];
  f.t[i] = elt;//on insere l'element
  f.taille++;//on augmente la taille
  return f;
}

//on extrait le premier element du tableau
Element extrait(Fdp *f){
  Element elt;
  if(f->taille<=0){
    fprintf(stderr, "Erreur: extraction dans fdp vide\n");
    exit(EXIT_FAILURE);
  }
  elt = f->t[f->taille-1];
  f->taille--;
  return elt;
}


void affiche_fdp(Fdp f){
  int i;
  for(i=0; i<f.taille; i++)
    printf("%c %d\n", f.t[i].a->c, f.t[i].poids);
  printf("*****************************\n\n");
}

  
//remplit la fdp avec le tableau de fréquence
Fdp remplit_fdp(int freq[128]){
  int i;
  Fdp f;
  Element elt;
  f.taille = 0;
  for(i=0; i<128; i++){
    if(freq[i] != 0){
      elt.a = creer_racine(i);
      elt.poids = freq[i];
      f = insere(f, elt);
    }
  }
  return f;
}

Element fusion(Element el1, Element el2){
	Arbre racine = creer_racine(' ');
	Element res;
	res.poids= el1.poids + el2.poids;
	racine = chg_gauche(racine,el1.a);
	racine = chg_droite(racine,el2.a);
	res.a = racine;
	return res;
}
