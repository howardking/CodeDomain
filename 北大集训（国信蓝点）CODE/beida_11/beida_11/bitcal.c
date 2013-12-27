#include <stdio.h>

int main (void)
{
	int m = 5;
	int n =10;
	printf("交换前：x1 = %d,x2 = %d\n",m,n);
	m^=n;
	n^=m;
	m^=n;
	printf("交换后：x1 = %d,x2 = %d\n",m,n);
	return 0;
}