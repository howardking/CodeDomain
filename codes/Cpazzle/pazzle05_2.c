#include "stdio.h"

extern int arr[];

int main(void){

	arr[0] = 100;

	printf("%d\n",arr[0]);

	return 0;
}
