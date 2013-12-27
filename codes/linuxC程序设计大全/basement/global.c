#include "stdio.h"

int add (int a, int b){
	return a+b;
}

int b = 10;

int multiple (int a){
	return a*b;
}

int main(void){
	int a = 1;
	int b = 5;

	printf("a+b = %d\n",add(a,b));
	printf("a*b = %d\n",multiple(a));
	printf("b = %d",b);
//	printf("global b = %d",:b);

	return 0;
}
