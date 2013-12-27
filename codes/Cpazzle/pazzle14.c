#include "stdio.h"
#define PrintInt(expr) printf("%s:%d\n",#expr,(expr))

int FiveTimes(int a){
	int t;
	t = (a<<2) + a;
	return t;
}

int main(void){
	int a = 1;
	int b = 2;
	int c = 3;
	
	PrintInt(FiveTimes(a));
	PrintInt(FiveTimes(b));
	PrintInt(FiveTimes(c));
	return 0;
}
