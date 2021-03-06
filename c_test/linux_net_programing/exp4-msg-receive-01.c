#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<sys/msg.h>
#include<errno.h>

#define MSGKEY 1024

struct msgstru{
	long msgtype;
	char msgtext[2048];
};

void childproc(){
	struct msgstru msgs;
	int msgid,ret_value;
	char str[512];
	while(1)
	{
		msgid = msgget(MSGKEY,IPC_EXCL);
		if(msgid==-1)
		{
			printf("msg not existed! errno%d [%s]\n",errno,strerror(errno));	
			sleep(2);
			continue;
		}
		/*接收消息队列*/
		ret_value = msgrcv(msgid,&msgs,sizeof(struct msgstru),0,0);
		printf("text=[%s] pid = [%d]\n",msgs.msgtext,getpid());
	}
	return ;
}

int main(int argc,char* argv[])
{
	int i,cpid;
	for(i=0;i<5;i++)
	{
		cpid = fork();	
		if(cpid < 0)
		{
			printf("fork failed\n");	
		}
		else if(cpid == 0)
		{
			childproc();	
		}
	}
}
