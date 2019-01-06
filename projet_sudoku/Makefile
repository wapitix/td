CFLAGS = -g -Wall -c
CFLAGSGR = ${CFLAGS} `sdl-config --cflags`
LFLAGS = -luvsqgraphics `sdl-config --libs` -lm -lSDL_ttf

run: sudoku
	./sudoku valeurs.txt

# Edition de lien du programme principal
sudoku: sudoku.o afficher.o gestion_sudoku.o lire_ecrire.o
	gcc -o $@ $^ ${LFLAGS}

# Compilation du programme principal
sudoku.o: sudoku.c lire_ecrire.h gestion_sudoku.h constantes.h
	gcc ${CFLAGSGR} $*.c

# Compilation des différents.o
afficher.o: afficher.c afficher.h gestion_sudoku.h constantes.h
	gcc ${CFLAGSGR} $*.c

gestion_sudoku.o: gestion_sudoku.c gestion_sudoku.h
	gcc ${CFLAGS} $*.c

lire_ecrire.o: lire_ecrire.c lire_ecrire.h gestion_sudoku.h
	gcc ${CFLAGS} $*.c


# Le clean
clean:
	rm -f *.o
	rm -f sudoku


# Pour faire un zip
# Mettre son nom à la place de SUDOKU
zip:
	rm -rf ${PITTIS_Thomas}
	rm -rf ${PITTIS_Thomas}.zip
	mkdir ${PITTIS_Thomas}
	cp Makefile ${PITTIS_Thomas}
	cp *.h *.c ${PITTIS_Thomas}
	cp A_LIRE.txt ${PITTIS_Thomas}
	zip -r ${PITTIS_Thomas}.zip ${PITTIS_Thomas}
	rm -rf ${PITTIS_Thomas}
