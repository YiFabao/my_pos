#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	int flags = -1;
	char buf[] ="FCNTL";

	int fd = open("test.txt",O_RDWR);
	if(fd==-1)
	{
		printf("打开文件失败\n");	
		exit(1);
	}
	printf("打开文件成功\n");

	flags = fcntl(fd,F_GETFL,0);
	printf("获取文件的状态为:%d\n",flags);

	flags |=O_APPEND;

	flags = fcntl(fd,F_SETFL,&flags);
	printf("更改文件的状态为：%d\n",flags);
	if(flags<0)
	{
		printf("failure to use fcntl\n");	
		exit(1);
	}

	write(fd,buf,strlen(buf));
	printf("写入文件成功\n");

	close(fd);
	return 0;
}
