#include "stdio.h"

int main(void){
	int i = 999;
	
	for (i; i>99; i--){
		if (0==555555%i){
			printf("The max factor with 3 digits in 555555 is :%d\n",i);
			break;
		}
	}
	
	return 0;
}
