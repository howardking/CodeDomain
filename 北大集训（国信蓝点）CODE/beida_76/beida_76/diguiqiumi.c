#include <stdio.h>

unsigned long MyPow(int m, int n)
{
	unsigned long tmp;
	if (0 == n)
	{
		return 1;
	}
	if (1 == n)
	{
		return m;
	}
	if (0==n%2)
	{
		tmp = MyPow(m,n/2);
		return tmp*tmp;
	}
	if (0 != n%2)
	{
		return m*MyPow(m,n-1);
	}
}

int main(void)
{
	/*经过优化后的递归法求m的n次幂*/
	int m;
	int n;
	printf("请输入mn的值：");
	scanf("%d%d",&m,&n);
	printf("%ld",MyPow(m,n));
	getch();
	return 0;
}