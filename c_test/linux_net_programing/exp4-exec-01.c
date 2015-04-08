#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	char* args[] ={"/bin/ls",NULL};
	printf("系统分配的进程号是：%d\n",getpid());
	int flag = execve("/bin/ls",args,NULL);
	if(flag<0)
	{
		printf("创建进程出错\n");	
		exit(1);
	}
	printf("创建进程成功，这句话会打印吗?\n");
	return 0;
}
