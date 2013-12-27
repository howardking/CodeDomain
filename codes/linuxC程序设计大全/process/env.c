#include "stdio.h"

extern ** environ;

int main(void){
	int i;

	for (i=0; environ[i] != NULL; i++)
		printf("each: %s\n",environ[i]);
	return 0;
}
