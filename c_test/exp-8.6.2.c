#include<stdio.h>
#define M 2
#define N 4

int main(int argc ,char* argv[]){
	int a[M][N],*pa;
	int i,j;
	pa = a[0];

	printf("请输入数组的值：");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)	
		{
			scanf("%d",pa+i*N+j);	
			putchar('\0');
		}
	}
	printf("数组内的数值是:");

	for(i=0;i<M*N;i++)
	{
		printf("%d\n",*(pa+i));	
	}
	return 0;
}
