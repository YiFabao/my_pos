#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	int uid;
	int fd = open("test.txt",O_RDWR);
	uid = fcntl(fd,F_GETOWN);
	printf("the SIG recv ID is %d\n",uid);
	close(fd);
	return 0;
}
