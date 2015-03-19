#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int heads(){
	return rand()<RAND_MAX/2;
}

int main(int argc,char* argv[])
{
	int i,j;
	int cnt;//抛硬币正面数总数
	int N = atoi(argv[1]);//抛硬币的次数
	int M = atoi(argv[2]);//实验M次
	//初始化一个一维数组 大小为N
	int *f = malloc(N*sizeof(int));
		
	for(i=0;i<M;i++)
	{
		cnt=0;
		for(j=0;j<N;j++)	
		{
			if(heads()){
				cnt++;	
			}	
		}
		(*(f+cnt))++;

	}

	//打印
	for(j=0;j<N;j++)
	{
		printf("%2d",j);	
		for(i=0;i<f[j];i+=10)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
