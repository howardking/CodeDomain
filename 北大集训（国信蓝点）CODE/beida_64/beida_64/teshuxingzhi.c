#include <stdio.h>

int main(void)
{
	/*有这样一个4位数abcd，它具有
	这样的性质abcd = （ab+cd）^2。
	其中，ab和cd为两个两位数，求
	这个4位数abcd*/
	int i;
	int m;
	int n;
	for (i=1010; i<9999; i++)
	{
		m = i/100;
		n = i%100;
		if ((m+n)*(m+n) == i)
		{
			printf("%d ",i);
		}
	}
	getch();
	return 0;
}