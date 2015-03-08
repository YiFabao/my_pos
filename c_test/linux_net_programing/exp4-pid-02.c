#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	pid_t pid;

	pid = fork();

	if(pid == -1)
	{
		printf("进程创建失败!\n");	
		exit(1);
	}else if(pid == 0){
		printf("子进程:pid=%d,ppid=%d,childpid=%d\n",getpid(),getppid(),pid);	
	} else{
		printf("父进程:pid=%d,ppid=%d,childpid=%d\n",getpid(),getppid(),pid);
		int	i;
		for(i=0;i<1000000;i++)
		{
			int j=j*10-2;	
		}
	}
	return 0;
}
