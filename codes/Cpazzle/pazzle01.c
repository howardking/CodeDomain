#include "stdio.h"
//#include "system.h"

int main()
{
	while(1){
		fprintf(stdout,"hello-std-out");
		fprintf(stderr,"hello-std-err");
		sleep(1);
	}
	return 0;
}
