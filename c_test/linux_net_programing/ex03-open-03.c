#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main(int argc,char* argv[]){
	int fd = -1;
	char filename[] = "test.txt";
	
	fd = open(filename,O_RDWR|O_CREAT|O_EXCL,S_IRWXU);

	printf("fd:%d\n",fd);


	return 0;
}
