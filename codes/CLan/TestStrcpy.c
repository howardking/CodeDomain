#ifndef DE
#define DE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif

int main(void)
{
	char * p;
	char arr[10] = "hello";
	
	p = arr;
	strcpy(arr,p);
	
	printf("%s\n",arr);
	printf("%s\n",p);
	

	return 0;
}
