#include <stdio.h>
#include <stdlib.h>




void calcul_frequence(int freq[128], char* nom_fic){
  FILE* f = fopen(nom_fic, "r");
  int c;
  if(f == NULL){
    fprintf(stderr, "Echec ouverture fichier %s\n", nom_fic);
    exit(EXIT_FAILURE);
  }
  for(c=0; c<128; c++)
    freq[c] = 0;
  while((c = fgetc(f)) != EOF)
    freq[c]++;
  fclose(f);
}

