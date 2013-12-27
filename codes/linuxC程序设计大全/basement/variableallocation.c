#include "stdio.h"

int main(void){
/*This program is used to display the difference between heap and stack in variable allocation*/
	int a = 0;
	int b = 0;
	//int c = 0;
	//int d = 0;
	int *p = (int *)malloc(sizeof(int));
	int *q = (int *)malloc(sizeof(int));

	printf("the address of the first variable is %x\n",&a);
	printf("the address of the second variable is %x\n",&b);
	printf("the address of the third variable is %x\n",p);
	printf("the address of the forth variable is %x\n",q);

	return 0;
}
