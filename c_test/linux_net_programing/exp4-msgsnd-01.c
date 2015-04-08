#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
	struct msgmbuf{
		int mtype;
		char mtext[10];
	};
	int msg_sflags;
	int msg_id;

	struct msgmbuf msg_mbuf;
	msg_sflags = IPC_NOWAIT;
	msg_mbuf.mtype = 10;
	char msg[]="测试消息";
	memcpy(msg_mbuf.mtext,msg,sizeof(msg));

	int ret = msgsnd(msg_id,&msg_mbuf,sizeof(msg),msg_sflags);
	if(ret == -1)
	{
		printf("发送消息失败\n");	
		return 1;	
	}
	else{
		printf("发送消息成功\n");	
		return 0;
	}
}
