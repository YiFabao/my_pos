#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(int argc,char* argv[]){
	int fd = -1;
	char filename[] = "test.txt";
	
	fd = open(filename,O_RDWR);//打开文伯，文件为可读写模式

	if(fd == -1)
	{
		printf("打开文件%s失败 fd:%d\n",filename,fd);	
	}
	else{
		printf("打开文件%s成功 fd:%d\n",filename,fd);	
	}
	return 0;
}
