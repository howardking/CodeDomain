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
	/*�����Ż���ĵݹ鷨��m��n����*/
	int m;
	int n;
	printf("������mn��ֵ��");
	scanf("%d%d",&m,&n);
	printf("%ld",MyPow(m,n));
	getch();
	return 0;
}