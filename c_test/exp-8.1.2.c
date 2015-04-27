#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
	char c1[] = {'c','h','i','n','a'};
	char c2[] = "helloworld";
	printf("c1 length:%d\n",sizeof(c1));
	printf("c2 length:%d\n",sizeof(c2));
	printf("复制前c1 lenght:%d \n ",strlen(c1));
	strcpy(c1,c2);
	printf("%s\n",c1);
	printf("复制后c1 length:%d \n ",strlen(c1));
	return 0;
}
