#include <stdio.h>

int main (void)
{
	int m = 5;
	int n =10;
	printf("����ǰ��x1 = %d,x2 = %d\n",m,n);
	m^=n;
	n^=m;
	m^=n;
	printf("������x1 = %d,x2 = %d\n",m,n);
	return 0;
}