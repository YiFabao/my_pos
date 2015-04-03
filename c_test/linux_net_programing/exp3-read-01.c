#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc,char* argv[])
{
	int fd = -1,i;
	ssize_t size = -1;
	char buf[10];
	char filename[] = "test.txt";
	//1.打开文件
	fd = open(filename,O_RDONLY);
	if(fd==-1)
	{
		printf("打开文件失败\n");	
		exit(1);
	}
	else{
		printf("打开文件成功\n");	
	}
	
	//循环读取数据，直到文件末尾或者出错
	while(size)
	{
		size = read(fd,buf,10);	
		if(size == -1)//读取文件出错
		{
			close(fd);	
			printf("读取文件出错 ");
			return -1;
		}
		else{
			if(size > 0)	
			{
				printf("read %d bytes:",size);	
				printf("\"");
				for(i=0;i<size;i++)
				{
					printf("%c",*(buf+i));	
				}
				printf("\n");
			}
			else{
				printf("读到文件末尾\n");	
			}
		}
	}
	//关闭文件
	close(fd);
	return 0;
}
