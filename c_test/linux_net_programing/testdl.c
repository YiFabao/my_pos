#include<dlfcn.h>//动态加载库库头

int main(int argc,char* argv[]){
	char src[] = "Hello Dymatic";
	int (*pStrLenFun)(char *str);
	void *phandle = NULL;
	char *perr = NULL;
	phandle = dlopen("./libstr.so",RTLD_LAZY);
	
	/*判断是否正确打开*/
	if(!phandle)
	{
		printf("加载库文件失败");	
	}
	
	

	return 0;
}
