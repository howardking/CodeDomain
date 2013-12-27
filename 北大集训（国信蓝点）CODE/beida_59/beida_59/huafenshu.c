#include <stdio.h>

int P(int n, int m)
{
	if (1 == m || 1 == n)
	{
		return 1;
	}
	if (n<m)
	{
		return P(n,n);
	}
	if (n == m)
	{
		return (1+P(n,n-1));
	}
	if (m>1 && m<n)
	{
		return (P(n,m-1)+P(n-m,m));
	}
}


int main(void)
{
	/*计算整数的划分数*/
	int n;
	int s;
	printf("请输入一个待求划分数的整数：\n");
	scanf("%d",&n);
	s = P(n,n);
	printf("%d的划分数是：%d\n",n,s);
	getch();
	return 0;
}