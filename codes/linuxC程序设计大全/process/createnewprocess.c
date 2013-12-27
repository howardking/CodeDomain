#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int main(void){
	pid_t pid;
	pid = fork();
	sleep(1);
	if (pid<0){
		printf("fail to fork\n");
		exit(-1);
	}else if (pid==0){
		printf("This is the child,pid is %u\n",getpid());
		sleep(1);
	}else {
		printf("This is parent,pid is %u,child id is %u\n",getpid(),pid);
		sleep(1);
	}
	return 0;
}

