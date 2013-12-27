#include <stdio.h>

long int DiGuiMi(long m, int n)
{
	if (0 == n)
	{
		return 1;
	}
	if (1 == n)
	{
		return m;
	}
	if (n > 1)
	{
		return m*DiGuiMi(m,n-1);
	}
}

int main(void)
{
	/*递归法求m的n次幂*/
	int n;
	long m;
	long re;
	printf("请输入M^N：");
	scanf ("%ld%d",&m,&n);
	re = DiGuiMi(m,n);
	printf("%ld^%d是：%ld",m,n,re);
	getch();
	return 0;
}