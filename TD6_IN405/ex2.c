#include <stdio.h>
#include <pthread.h>

#include <stdlib.h>
#include <sys/time.h>

typedef struct {
	int * i;
	int * moy;
	int * T;
	int id;
	pthread_mutex_t * m;
	
} arg_t;

void barrier (int n, arg_t * A) {
	pthread_mutex_lock (A->m);
	(*A->i) ++;
	
	pthread_mutex_unlock (A->m);
}

void * ft (void * a) {
	int i;
	arg_t * A = (arg_t *) a;

	for (i = A->id * 2; i < (A->id + 1) * 2; ++i) {
		pthread_mutex_lock (A->m);
		(*A->moy) += A->T[i];
		pthread_mutex_unlock (A->m);
	}

	barrier (1, A);
	
	if (! A->id)
		(*A->moy) /= 20;

	barrier (2, A);

	for (i = A->id * 2; i < (A->id + 1) * 2; ++i) {
		A->T[i] = (*A->moy) - A->T[i];
		printf ("#%d -> %d\n", i, A->T[i]);
	}
}

int main () {
	int i;
	arg_t A [10];
	pthread_t tid [10];
	pthread_mutex_t m;
	printf ("Hello World!\n");

	srand (time (NULL));

	pthread_mutex_init (&m, NULL);

	for (i = 0; i < 10; ++i) {
		
		
		pthread_create (tid+i, NULL, ft, A+i);
	}

	for (i = 0; i < 10; ++i){
		pthread_join (tid [i], NULL);
	}
	
	pthread_mutex_destroy (&m);
}
