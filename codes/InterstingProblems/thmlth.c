/*Description:The program is used to calculate 13*13*13*13*13*13*13*13*13*13*13*13*13
Author:Root Wang
Time:2012-1-30
*/

#include "stdio.h"

int main(void){
	int mul = 13;
	int i = 1;
	
	for (i; i<13; i++){
		mul = (mul*13)%1000;
	}
	
	printf("The result is %d\n",mul%1000);

	return 0;
}
