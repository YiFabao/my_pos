/**
  *字符分割函数strock
 **/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	char str[] = "10     11       12         A";
	char delims[] = " ";
	char *result = NULL;
	int i;
	for(i=0;i<3;i++)
	{
		if(i==0){
			result = strtok(str,delims);	
		}else{
			result = strtok(NULL,delims);	
		}
		printf("%d ",atoi(result));
	}
	result = strtok(NULL,delims);
	printf("类别为：%s\n",result);
	return 0;
}

