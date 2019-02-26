#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid_t waitpid(pid_t pid, int WIFEXITED);
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
	
	
return 0;
}
