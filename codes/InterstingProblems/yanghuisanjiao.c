/*Desctioption:This program is used to display the Yang Hui sanjiao
Author:Root Wang
Time:2012-1-30
Version:1.0
*/

#include "stdio.h"

int main(void){
	
	int i,j,n = 13;
	printf("N=");
	while(n>12)
		scanf("%d",&n);
	for (i=0; i<=n;i++){
		for (j=0; j<12-i; j++)
			printf(" ");
		for (j=1; j<i+2; j++)
			printf("%6d",c(i,j));
		printf("\n");
	}
	return 0;
}

int c(int x, int y){
	int z;
	if ((1==y)||(y==x+1))
		return 1;
	z= c(x-1,y-1)+c(x-1,y);
	return z;
}
