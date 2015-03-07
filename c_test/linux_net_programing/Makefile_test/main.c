#include<stdio.h>

#include "add.h"
#include "sub.h"
int main(int argc,char* argv[])
{
	int a = 10,b =12;
	float x=1.23456,y=9.87654321;
	//调用函数并将结果打印出来
	printf("a+b=%d\n",add_int(a,b));
	printf("x+y=%f\n",add_float(x,y));
	printf("a-b=%d\n",sub_int(a,b));
	printf("x-y=%f\n",sub_float(x,y));
	return 0;
}
