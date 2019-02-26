#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int temps = 10;
	temps = SDL_GetTicks();
		
	pid_t pid;
	for(int i=0;i<10;i++)
	{	
		if ((pid=fork())==0) //pour le fils
		{
			printf("Mon PID  est %d et celui de mon père est %d\n",getpid(), getppid());	
			exit(0);
		}
		else //pour le père
		{
			printf("Mon PID  est %d et celui de mon fils est %d\n",getpid(),pid);
		}
		wait(NULL);
	}
	
return 0;
}

