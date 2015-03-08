#include<unistd.h>
#include<stdio.h>

int main(int argc,char* argv[])
{
	pid_t fpid;
	int count = 0;
	fpid = fork();
	if(fpid<0)
	{
		printf("error in fork!");	
	}
	else if(fpid==0)
	{
		printf("I am the child process,my process id is %d,父进程:%d\n ",getpid(),getppid());	
		printf("我是爹的儿子");
		count++;
	}
	else{
		printf("I am the parent process ,my process id is %d",getpid());	
		printf("我是孩子他爹!");
		count++;
	}
	printf("统计结果:%d\n",count);
	return 0;
}
