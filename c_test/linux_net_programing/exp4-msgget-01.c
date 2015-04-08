#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>

int main(int argc,char* argv[])
{
	key_t key;
	int msg_flags,msg_id;
	msg_flags = IPC_CREAT|IPC_EXCL;

	msg_id = msgget(key,msg_flags);
	if(msg_id == -1)
	{
		printf("建立消息失败\n");	
		return 0;
	}
	else{
		printf("建立消息成功:%d\n",msg_id);	
	}
	return 0;
}

