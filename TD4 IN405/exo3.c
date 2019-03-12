#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int m = rand();
	pid_t pid;
	while(m)
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
