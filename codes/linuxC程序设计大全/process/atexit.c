#include "stdio.h"
#include "stdlib.h"

void function_one(void){/*进程结束处理函数1*/
	printf("the first exit handler\n");
}

void function_two(void){/*进程结束处理函数2*/
	printf("the second exit handler\n");
}

int main(void){
	if (-1==atexit(function_one)){
		perror("fail to set exit handler");
		exit(1);
	}	
	if (-1==atexit(function_one)){
		perror("fail to set exit handler");
		exit(1);
	}	
	if (-1==atexit(function_two)){
		perror("fail to set exit handler");
		exit(1);
	}	
	return 0;
}
