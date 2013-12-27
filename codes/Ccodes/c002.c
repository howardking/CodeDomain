/*Description:This is a program used to translate inch to cm
Time:2012-1-13
Auther:Root Wang
Version:1.0
*/
#include "stdio.h"
int main(void){
	float inch=0;
	float cm=0;
	
	printf("Please input your length of inch:\n");
	scanf("%f",&inch);
	printf("After translation:%f\n",cm=inch*2.54);

	return 0;
}
