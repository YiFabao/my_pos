#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[]){
	int fd = -1;
	ssize_t size = -1;
	
	char buf[] ="quick brown fox jumps over the lazy dog";
	char filename[] = "test.txt";

	fd = open(filename,O_RDWR|O_TRUNC);
	if(fd == -1)
	{
		printf("打开文件失败\n");	
		exit(1);
	}
	else{
		printf("打开文件成功\n");	
	}

	//写操作
	size = write(fd,buf,strlen(buf));	
	printf("写入%d个字节到文件%s中\n ",size,filename);

	printf("fd:%d\n",fd);
	close(fd);

	return 0;
}
