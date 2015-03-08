#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	
	int flags= -1;
	int accmode = -1;

	flags = fcntl(0,F_GETFL,0);
	if(flags < 0 )
	{
		printf("failure to use tcntl \n");	
		exit(1);
	}

	accmode = flags & O_ACCMODE;

	if(accmode == O_RDONLY)
	{
		printf("STDIN READ ONLY\n");
	}
	else if(accmode == O_WRONLY)
	{
		printf("STDIN WRITE ONLY\n");		
	}
	else if(accmode == O_RDWR)
	{
		printf("STDIN READ WRITE\n");	
	}
	else{
		printf("STDIN UNKNOWN MODE\n");	
	}

	if(flags & O_APPEND)
	{
		printf("STDIN APPEND\n");	
	}

	if(flags & O_NONBLOCK)
	{
		printf("STDIN NONBLOCK\n");	
	}
	return 0;
}
