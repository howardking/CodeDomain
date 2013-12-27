#include "stdio.h"
#define PrintInt(expr)printf("%s:%d\n",#expr,(expr))

int main(void){
	int y = 100;
	int *p = NULL;

	p = malloc(sizeof(int));
	*p = 10;
	y = y/*p;/*dividing y by *p*/;
	PrintInt(y);
	return 0;
}
