#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char* argv[]){
	pid_t pid,ppid;

	pid = getpid();
	ppid = getppid();

	printf("当前的线程号是：%d\n",pid);
	printf("当前的父线程号是:%d\n",ppid);
	return 0;
}
