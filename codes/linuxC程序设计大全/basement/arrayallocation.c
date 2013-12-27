/*Description:This program is used to dentify the allocation of array
Auther:Root Wang
Time:2012-1-20
Version:1.0 

*/

#include "stdio.h"

int main(void){
	int i = 0;
	int array[10];

	for (i=0; i<10; i++){
		printf("The address of array[%d] is 0x%x\n",i,&array[i]);
	}

	return 0;
}
