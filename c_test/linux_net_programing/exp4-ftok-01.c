#include<sys/types.h>
#include<sys/ipc.h>
#include<stdio.h>

int main(int argc,char* argv[])
{
	key_t key;
	char* msgpath = "ipc/msg1/";
	key = ftok(msgpath,'a');
	if(key != -1)
	{
		printf("成功建立key\n");	
	}
	else{
		printf("建立key失败\n");	
	}
	return 0;

}
