/**
  *文件操作
 **/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	FILE *fp;
	char*[] datas;
	int totalNum=0;
	if((fp=fopen("data1.txt","r"))==NULL)
	{
		printf("can not open file\n");	
	}
	
	char s[1024];
	while((fgets(s,1024,fp)!=NULL))
	{
		totalNum++;//总的数据行数	
	}	
	return 0;
}
