#include "stdio.h"

int main(void){
	int a = 12;
	int b = 12;
	int c = 12;

	printf("after shift  c = %d\n",(c<<3)+(c<<2)+c);
	printf("b/8=%d\n",b>>3);
	printf("after shift b = %d\n",b);
	printf("a divided by 4 is :%d\n",a>>2);
	printf("a = %d\n",a);
	printf("a multiplied by 5 is:%d\n",a<<2+a);
	printf("a = %d\n",a);

	return 0;
}
