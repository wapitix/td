#include <stdio.h>
#include <uvsqgraphics.h>
#include "constantes.h"
#include "gestion_sudoku.h"

void initialiser_fenetre_graphique() {
	init_graphics(LARGEUR,HAUTEUR);
	affiche_auto_off();
	fill_screen(COUL_FOND);
}

void terminer_fenetre_graphique() {
	wait_escape();
}

void lignes_larges_horizontales()
{
	POINT ghaut,dhaut;
	ghaut.x=0;		ghaut.y=((HAUTEUR-TAILLE_CASE)+1);
	dhaut.x=LARGEUR;		dhaut.y=((HAUTEUR-TAILLE_CASE)+1);
	int q=0;
		
	draw_line(ghaut,dhaut,COUL_TRAIT);
		
	while(q<4)
	{
		draw_line(dhaut,ghaut,COUL_TRAIT);
		ghaut.y= ghaut.y -(3*TAILLE_CASE);
		dhaut.y= ghaut.y;
		q++;
	}
}


void lignes_larges_verticales()
{
	POINT gh,gb; //gh=gauche haut, gb= gauche bas
	gh.x=1;		gh.y=(HAUTEUR-TAILLE_CASE);
	gb.x=gh.x;		gb.y=0;
	
	int p=0;
	draw_line(gh,gb,COUL_TRAIT);
	
	while(p<3)
	{
		draw_line(gh,gb,COUL_TRAIT);
		gh.x=gh.x + (3*TAILLE_CASE);
		gb.x=gh.x;
		p++;
	}
	
	POINT A,B;
	A.x=LARGEUR-2;
	A.y=(HAUTEUR - TAILLE_CASE);
	B.x=LARGEUR-2;
	B.y=1;

	draw_line(A,B,COUL_TRAIT);

}
			

void lignes_base()
{
	POINT h,b,g,d; //points haut,bas,gauche,droite
	int i=0;
	int j=0;
	
	h.x=0;		h.y=(HAUTEUR-(TAILLE_CASE));
	b.x=h.x;		b.y=0;
	
	while(i<11)
	{
		draw_line(h,b,COUL_TRAIT);
		i++;
		h.x= h.x+TAILLE_CASE;
		b.x=h.x;
	}
	
	
	d.x=LARGEUR;		d.y=0;
	g.x=0;		g.y=d.y;
	
	while(j<10)
	{
		draw_line(g,d,COUL_TRAIT);
		j++;
		d.y=d.y+(HAUTEUR/10);
		g.y=d.y;
	}
}


void sudoku_afficher(SUDOKU S) {
	lignes_base();
	lignes_larges_verticales();
	lignes_larges_horizontales();
	
}

