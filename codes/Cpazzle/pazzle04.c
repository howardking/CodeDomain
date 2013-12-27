/*Do you know the result of the following program?*/

#include "stdio.h"

int main(void){
	float a = 12.5;
	
	printf("%d\n",a);
	printf("%d\n",(int)a);
	printf("%d\n",*(int *)&a);	

	return 0;
}
