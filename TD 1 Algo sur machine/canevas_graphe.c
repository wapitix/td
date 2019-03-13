#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct { //graphe représenté par une matrice d'adjacence
  	int nombre_sommet; //taille de la matrice
  	int ** matrice_adjacence;
} graphe;


void affiche_graphe(graphe G){
	int i,j;
	printf("Graphe avec %d sommets \n",G.nombre_sommet);
	for(i = 0; i<G.nombre_sommet; i++){
		printf("Voisins de %d: ",i);
		for(j = 0; j < G.nombre_sommet; j++){
			if(G.matrice_adjacence[i][j]) printf("%d ",j);
		}
		printf("\n");
	}
}

int degre(graphe G, int i){
	 int degre=0;
	 
	 for(int j=0;j<G.nombre_sommet;j++)
	 {
		 for(i=0;i<G.nombre_sommet;i++)
		 {
			 degre++;
		 }
	return degre;
}


graphe init_graphe(int n){//créé un graphe dont tous les sommets sont isolés
	graphe G;
	G.nombre_sommet=n;
	G.matrice_adjacence=malloc(sizeof(int*)*n);
	for(int i=0;i<G.nombre_sommet;i++)
	{
		G.matrice_adjacence[i]=calloc(n,sizeof(int));
	}
	return G;
}

void libere_graphe(graphe G){
	G.matrice_adjacence=free(*n);
}

graphe cycle_graphe(int n){//créé un cycle
	graphe G;
	return G;
}


graphe complet_graphe(int n){//créé un graphe complet
	graphe G;
	return G;
}


graphe alea_graphe(int n, float p){
	graphe G;
	return G;
}

graphe graphe_arbre(int *pere, int n){//créer un arbre couvrant à partir du tableau des pères représenté comme un graphe
	graphe G;
	return G;
}

void parcours_sommet(graphe G, int s, int *couleur, int *pere){
}

graphe parcours_graphe(graphe G){
	int *couleur = calloc(G.nombre_sommet,sizeof(int)); // 0 est blanc, 1 gris et 2 noir
	int *pere = malloc(sizeof(int)*G.nombre_sommet);
	free(couleur);
	free(pere);
}


  
void cycle_eulerien(graphe G){//on suppose le graphe connexe
}


int main(){
	/* Tests pour vérifier si vos implémentations sont correctes*/
	srand(time(NULL));
  	graphe G = cycle_graphe(10);
  	affiche_graphe(G);
	graphe H = complet_graphe(5);
	affiche_graphe(H);
	graphe L = alea_graphe(10,0.2);
	affiche_graphe(L);
	graphe A = parcours_graphe(L);
	affiche_graphe(A);
	cycle_eulerien(L);
	cycle_eulerien(H);
	libere_graphe(G);
	libere_graphe(H);
	libere_graphe(L);
	libere_graphe(A);
}
