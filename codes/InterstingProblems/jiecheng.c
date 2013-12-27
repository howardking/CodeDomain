/*Description: Let us calc the number of 0 of 100!
Author:Root Wang
Time:2012-1-30
Version:1.0
*/

#include "stdio.h"

int main(void){
	
	int a;
	int count = 0;

	for (a=5; a<=100; a+=5){
		count++;
		if(0==(a%25))
			count++;
	}
	printf("The number of 0 int the end of 100! is %d\n",count);

	return 0;
}
