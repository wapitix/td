#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"
#include "frequence.h"
#include "fdp.h"


//construit l'arbre d'huffman a partir du fichier ASCII nom_fic
Arbre arbre_huffman(char* nom_fic){
  int freq[128] = {0};
  Fdp f;
  
  calcul_frequence(freq, nom_fic);
  f = remplit_fdp(freq);
  affiche_fdp(f);
  while(1)
  {
	  Element el1 = extrait(&f);
	  if(f.taille == 0) {
		  return el1.a;
	  }
	  Element el2 = extrait(&f);
	  f = insere(f,fusion(el1,el2));
  }
}
void parcours_code(char lettre, int taille, int*code, Arbre huffman)
{
	
	if(huffman==NULL)
	{
		if(huffman->c==lettre)
		{
			
			for(int i=0; i<taille;i++)
			{
				printf("%d",code[i]);
			}
		}
	}
	if(est_feuille(huffman)) return;
		code[taille]=0;
		parcours_code(lettre, taille+1,code,gauche(huffman));
		code[taille]=1;
		parcours_code(lettre, taille+1,code, droite(huffman));
	
}

void creer_codage(int **codage, int taille, int*code, Arbre huffman)
{
	if(huffman==NULL) return;
	if(est_feuille(huffman))
	{
		for(int i=0; i<taille;i++)
		codage[huffman->c][i] =code[i];
	}
	codage[huffman->taille] = -1;
	}
	code[taille]=0;
	creer_codage(codage,taille+1,code,gauche(huffman);
	code[taille]=1;
	creer_codage(codage,taille+1,code,droite(huffman);
	
}




int main(int argc, char** argv){
  Arbre a;
  
  if(argc != 2){
    fprintf(stderr, "Erreur: format de la ligne de commande attendu\n./main nom_du_fichier\n");
    exit(EXIT_FAILURE);
  }

  
  
  a = arbre_huffman(argv[1]);
  affiche_arbre(a);
  int code[128];
  parcours_code('a',0,code,a);
  int codage[128][128];
  creer_codage(codage,0,code,a);
  
  
  exit(EXIT_SUCCESS);
}
