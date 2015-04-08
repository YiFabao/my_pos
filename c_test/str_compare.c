#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[]){
	char str1[] = "abcd";
	char str2[] = "abced";
	int flag = strcmp(str1,str2);
	printf("flag=%d\n",flag);
	return 0;

	

}
