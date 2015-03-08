#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>


int main(int argc,char* argv[])
{
	int i;
	for(i=0;i<2;i++)
	{
		pid_t fpid = fork();		
		if(fpid == 0)
		{
			printf("%d child %d %d %d\n",i,getppid(),getpid(),fpid);	
		}
		else
		{
			printf("%d parent %d %d %d\n",i,getppid(),getpid(),fpid);	
		}
	}
	return 0;
}
