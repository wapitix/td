#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	
	int i=0;
	int n=0;
	
	printf("Entrez le nombre n de fils à créer :\n");
	scanf("%d", &n);
	
	
	for(i=1;i<n+1;i++)
	{
		pid_t pid;
		pid=fork();
		
		int temps = srand(getpid()) %10+1;
		
		
		
		
		
		/*if(pid ==0)
		{
			printf("PID du fils %d est %d\n",i, getpid());
			return 0;
		}*/
	} 
}
		
