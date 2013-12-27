/*Discription:This is my first program in language-C
Time:2012-1-13
Auther:Root Wang
Version:1.0
*/
#include "stdio.h"

int main(void){
	int dogs=0;    //variable 'dogs' is used to store the number you have input 
	printf("How many dogs do you have?\n");
	scanf("%d",&dogs);
	printf("You have %d dog(s)!\n",dogs);
	
	return 0;
}
