/*Do you know the result of " printf("%d\n",printf(%d,printf("%d",i)))"?*/

#include "stdio.h"

int main(void){
	int i = 43;
	
	printf("%d\n",printf("%d",printf("%d",i)));
	
	return 0;
}

