#include "stdio.h"

int main(void){
	int a = 0x12345678;
	char *p;

	p = (char *)(&a);
	if (0x78==*p)
		printf("The little endian\n");
	else 
		printf("The big endian\n");

	return 0;
}
