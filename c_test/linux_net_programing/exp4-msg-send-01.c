#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>


#define KEY 1024

struct msgmbuf{
	int mtype;
	char mtext[2048];
};

int main(int argc,char* argv[]){
	struct msgmbuf msgs;
	int msg_type;
	char str[256];
	int ret_value;
	int msqid;

	msqid = msgget(KEY,IPC_EXCL);//检查消息队列是否存在
	if(msqid == -1)
	{
		msqid = msgget(KEY,IPC_CREAT|0666);//便建消息队列	
		if(msqid == -1)
		{
			printf("failed to create msq|errno=%d [%s]\n",errno,strerror(errno));	
			exit(-1);
		}
	}
	while(1)
	{
		printf("input message type(end:0):");	
		scanf("%d",&msg_type);
		if(msg_type == 0)
		{
			break;	
		}
		printf("input message to be sent:");
		scanf("%s",str);
		msgs.mtype = msg_type;
		strcpy(msgs.mtext,str);

		//发送消息队列
		ret_value = msgsnd(msqid,&msgs,sizeof(struct msgmbuf),IPC_NOWAIT);
		if(ret_value<0)
		{
			printf("msgsnd() write msg failed ,errno=%d[%s]\n",errno,strerror(errno));	
			exit(-1);
		}
	}
	msgctl(msqid,IPC_RMID,0);
}





