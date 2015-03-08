#include<stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<string.h>

static char msg[] = "你好，共享内存\n";

int main(int argc,char* argv[])
{
	key_t key;
	int semid,shmid;
	char i,*shms,*shmc;
	struct semid_ds buf;
	int value= 0;
	char buffer[80];
	pid_t p;
	key = ftok("/home/yifabao/ipc/sem",'a');
	shmid = shmget(key,1024,IPC_CREAT|0604);
	semid = CreateSem(key,0);

	p = fork();
	if(p>0)
	{
		shms = (char*)shmat(shmid,0,0);
		memcpy(shms,msg,strlen(msg)+1);
		sleep(10);
		Sem_P(semid);
		shmdt(shms);
		DestroySem(semid);
	}
	else if(p==0)
	{
		shmc = (char *)shmat(shmid,0,0);	
		Sem_V(semid);
		printf("共享内存的值为：%s\n",shmc);
	}
	return 0;
}
