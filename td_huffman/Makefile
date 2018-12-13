run: main
	./main test

all: main

main: main.o arbre.o frequence.o fdp.o
	gcc main.o arbre.o frequence.o fdp.o -Wall -o main 

main.o: main.c arbre.h fdp.h
	gcc -c main.c -Wall -g

arbre.o: arbre.c arbre.h
	gcc -c arbre.c -Wall -g

frequence.o: frequence.c
	gcc -c frequence.c -Wall -g

fdp.o: fdp.c fdp.h arbre.h
	gcc -c fdp.c -Wall -g

clean:
	rm *.o
	rm main
