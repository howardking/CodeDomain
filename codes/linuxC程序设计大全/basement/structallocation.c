/*Description:This program is used to identify the address of struct*/

#include "stdio.h"

struct test{
	int array[5];
	int *p;
	char temp;
};

int main(void){
	int i = 0;	
	struct test var;
	
	for (i=0; i<5; i++){
		printf("The address of var.array[%d] is 0x%x\n",i,&var.array[i]);
	}
	printf("The address of *p is 0x%x\n",var.p);
	printf("The address of temp(char) is 0x%x\n",&(var.temp));
	printf("The address of temp(char) is 0x%x\n",&var.temp);
	printf("the size of struct is %d\n",sizeof(struct test));
	printf("the size of var is %d\n",sizeof(var));

	return 0;
}
