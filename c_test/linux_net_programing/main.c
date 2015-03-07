#include<stdio.h>

extern int StrLen(char* str);

int main(int argc,char* argv[])
{
	char src[] = "Hello Dynatic";
	printf("string length is %d\n",StrLen(src));
	return 0;
}
