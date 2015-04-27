#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	const char *c[4] = {"China","USA","Rassia","Japan"};
	int i;
	
	for(i = 0;i<4;i++)
	{
		puts(*(c+i));	
	}
	return 0;
}
