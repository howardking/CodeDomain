#include "stdio.h"

#define SIZEOF(arr) (sizeof(arr)/sizeof(arr[0]))
#define PrintInt(expr) printf("%s:%d\n",#expr,(expr))

int main(void){

	int i = 0;
	int pot[] = { 0001, 0010, 0100, 1000};

	for (i=0; i<SIZEOF(pot); i++){
		PrintInt(pot[i]);
	}
	return 0;
}
