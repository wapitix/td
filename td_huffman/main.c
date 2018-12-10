#include <stdio.h>
#include <stdlib.h>
#include "arbre.h"


//construit l'arbre d'huffman a partir du fichier ASCII nom_fic
Arbre arbre_huffman(char* nom_fic){

  return NULL;
}




int main(int argc, char** argv){
  Arbre a;
  
  
  
  if(argc != 2){
    fprintf(stderr, "Erreur: format de la ligne de commande attendu\n./main nom_du_fichier\n");
    exit(EXIT_FAILURE);
  }

  
  
  a = arbre_huffman(argv[1]);
  affiche_arbre(a);
  
  exit(EXIT_SUCCESS);
}
