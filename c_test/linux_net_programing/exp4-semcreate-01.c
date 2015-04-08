#include<sys/types.h>
#include<sys/sem.h>
#include<sys/ipc.h>
#include<stdio.h>

typedef int sem_t;

union semun{
	int val;
	struct semid_ds *buf;
	unsigned short *array;
}arg;

sem_t CreateSem(key_t key,int value){
	union semun sem;
	sem_t semid;
	sem.val = value;
	semid = semget(key,0,IPC_CREAT|0666);
	if(semid == -1)
	{
		printf("create semaphore error\n");	
		return -1;
	}

	semctl(semid,0,SETVAL,sem);

	return semid;
}
