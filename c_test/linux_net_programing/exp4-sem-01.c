#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<stdlib.h>
typedef int sem_t;

extern CreateSem(key_t key,int value);

int GetvalueSem(sem_t semid)
{
	union semun sem;
	return semctl(semid,0,GETVAL,sem);
}

void DestroySem(sem_t semid)
{
	union semun sem;
	sem.val = 0;
	semctl(semid,0,IPC_RMID,sem);
}
int main(int argc,char* argv[])
{
	key_t key;
	int semid;
	char i;
	int value = 0;

	key = ftok("/ipc/sem",'a');
	semid = CreateSem(key,100);

	for(i=0;i<=3;i++)
	{
		Sem_P(semid);	
		Sem_V(semid);
	}
	value = GetvalueSem(semid);
	printf("信号量值为:%d\n",value);
	DestroySem(semid);
	return 0;
}
