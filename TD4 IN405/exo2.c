#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
		
	pid_t pid;
	for(int i=0;i<10;i++)
	{	
		if ((pid=fork())==0) //pour le fils
		{
			printf("Mon PID  est %d et celui de mon père est %d\n",getpid(), getppid());	
			srand(getpid());
			sleep(rand()%10+1);
			exit(0);
/*srand(getpid()) permet de trouver une valeur aleatoire differente de la precedente a chaque tirage
 * , la focntion sleep mettre en pause un fils qui lui prendra une
 * valeur aleatoire avec rand entre 0 et 10 avec le %, puis on rajoute +1
 * pour ne pas avoir le 0 comme valeur aleatoire. Le srand get pid au dessus
 * va recup une valeur aleatoire entre 0 et 10 qui sera a chaque fois
 * differente de la precedente*/
		}
		else //pour le père
		{
		
		}
	}
	for(int i=0;i<10;i++)
	{
		pid_t pid = wait(NULL);
		printf("le pid du fils est %d\n", pid);
/*on fait une boucle qui va attribuer une valeur a chaque fils pid et
 * qui va l afficher apres */

		
	}
return 0;
}

/* Apres avoir fait "gcc exo2.c" et "./a.out" le terminal va afficher ca :
 * <Mon PID est 3305 et celui de mon père est 3299>
 * apres ca va le faire 10 fois et la premiere valeur va etre differente pour chaque fils
 * et les fils vont se fermer et ca va afficher petit a petit
 * <le pid du fils est 3309> et ca 10 fois
 */
 
 /*pour les autres exos on va pouvoir utiliser le squelette de base pour 
  * creer des processus qui est : 
   
   
  
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
		
	pid_t pid;
	for(int i=0;i<10;i++)
	{	
		if ((pid=fork())==0) //pour le fils
		{
			

		}
		else //pour le père
		{
		
		}
	}
	for(int i=0;i<10;i++)
	{
				
	}
return 0;
}
*/

