#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc,char* argv[])
{
	int result = -1;
	int fd[2],nbytes;
	pid_t pid;
	char msg[] = "你好，管道"; 
	char readbuffer[80];

	/*文件描述符1用于写，0用于读*/
	int *write_fd = fd+1;
	int *read_fd = fd;
	
	result = pipe(fd);

	if(result == -1)
	{
		printf("创建管失败\n");	
		return -1;
	}

	printf("创建管道成功\n");

	pid = fork();

	if(pid == -1)
	{
		printf("fork 进程失败\n");	
		return -1;
	}
	if(pid == 0)
	{
		close(*read_fd);		
		result = write(*write_fd,msg,strlen(msg));
		return 0;
	}
	else
	{
		close(*write_fd);	
		nbytes = read(*read_fd,readbuffer,sizeof(readbuffer));
		printf("接收到%d个数据,内容为:%s\n",nbytes,readbuffer);
	}
	return 0;
}
