#include "stdio.h"

int main(void){
	char dummy[80];

	printf("Enter a string:\n");
	scanf("%[^r]",dummy);
	printf("%s\n",dummy);

	return 0;
}
