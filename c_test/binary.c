#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printB(int a)
{
	int size = sizeof(int)*8;	
	int i;
	for(i=size;i>=0;i--)
	{
		int flag = a&(1<<i);
		printf("%c ",flag>0?'1':'0');
	}
}
int main(int artc,char* argv[]){
	int len = sizeof(int)*8;
	int i = 0;
	for(i=0;i<len+3;i++)
	{
		printf("%11d : ",1<<i);	
		printB(1<<i);
		printf("\n");
	}
	return 0;
}
