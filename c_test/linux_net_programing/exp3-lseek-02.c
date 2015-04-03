#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	int fd = -1;
	ssize_t size = -1;
	off_t offset = -1;
	char buf1[] ="01234567";
	char buf2[] ="ABCDEFGH";
	char filename[] = "hello.txt";
	int len = 8;
	
	fd = open(filename,O_RDWR|O_CREAT,S_IRWXU);

	if(fd == -1)
	{
		printf("打开文件出错\n");	
		exit(1);
	}else{
		printf("打开文件成功 fd=%d\n",fd);	
	}

	size = write(fd,buf1,len);
	if(size!=len)
	{
		printf("写文件出错 \n");	
		exit(1);
	}
	offset = lseek(fd,32,SEEK_SET);

	if(offset == -1)
	{
		printf("seek error!\n");
		exit(1);
	}

	size = write(fd,buf2,len);
	if(size!=len)
	{
		printf("写出错\n");
		exit(1);
	}else{
		printf("写成功size:%d\n",size);	
	}

	close(fd);
	return 0;

}
