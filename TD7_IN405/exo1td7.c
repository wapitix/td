// Pour paire d'entiers

#define _POSIX_SOURCE 1
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#define S_BUF 50

int main (int argc, char ** argv) 
{
	int tube[2];
	srand(getpid());
	
	
	char buffer[S_BUF];
	int n; 
	pid_t pid_fils;
	
	if (pipe(tube) == -1) {
	 perror ("pipe");
	 exit (1);
	}
	if ((pid_fils = fork( )) == -1 ) {
	 perror ("fork"); 
	 exit (1);
	}
	
	 if (pid_fils == 0) 
	 {  
		 if (( n = read (tube[0],buffer, S_BUF)) == -1) {
		 perror ("read"); exit (1);
		 }
		 else {
		 buffer[n] = '\0'; printf ("%s\n", buffer);
		 }
	 exit (0);
	 }
	 
	 else {  //père 
		 if  (write (tube[1],"Paire d'entiers 1 = 455, ",25) == -1){
			perror ("read"); 
			exit (1);
		 }
		 if (write(tube[1],"Paire d'entiers 2 = 34",22) == -1){
			perror ("read"); 
			exit (1);
		 }
	 wait (NULL);
 }
 return (EXIT_SUCCESS); }



















//Pour type nommés
/*#define _POSIX_SOURCE 1
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define S_BUF 16

int n ;
char buffer[S_BUF];

int main (int argc, char ** argv) 
{
	int fd_write;
	
	if(( n= write(fd_write,"Hello World    .", 16)) == -1) {
		perror ("write");
		exit (1);
	}

close (fd_write);
return EXIT_SUCCESS;

}
*/











/* Ca c'est la partie 1 avec les tubes anonymes, ca ecrit "Hello World   ." a la fin
#define _POSIX_SOURCE 1
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#define S_BUF 16

int main (int argc, char ** argv) 
{
	int tube[2];
	char buffer[S_BUF];
	int n; 
	pid_t pid_fils;
	
	if (pipe(tube) == -1) {
	 perror ("pipe");
	 exit (1);
	}
	if ((pid_fils = fork( )) == -1 ) {
	 perror ("fork"); 
	 exit (1);
	}
	
	 if (pid_fils == 0) 
	 {  
		 if (( n = read (tube[0],buffer, S_BUF)) == -1) {
		 perror ("read"); exit (1);
		 }
		 else {
		 buffer[n] = '\0'; printf ("%s\n", buffer);
		 }
	 exit (0);
	 }
	 
	 else {  //père 
		 if ( write (tube[1],"Hellow World   .", 16)== -1) {
		perror ("read"); exit (1);
		 }
	 wait (NULL);
 }
 return (EXIT_SUCCESS); }
*/
	
	


