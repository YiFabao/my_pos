#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	
	int fd = -1;
	char filename[] = "test.txt";
	off_t offset= -1;
	fd = open(filename,O_RDONLY);

	if(fd==-1)
	{
		printf("打开文件错误\n");	
		exit(1);
	}
	printf("打开文件成功 fd:%d\n",fd);

	offset = lseek(fd,0,SEEK_CUR);

	if(offset == -1)
	{
		printf("seek 出错\n");	
	}else{
		printf("seek is %d\n",offset);	
	}
	return 0;

	

}
