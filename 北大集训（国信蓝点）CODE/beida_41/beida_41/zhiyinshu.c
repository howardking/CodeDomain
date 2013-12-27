#include <stdio.h>
#include <math.h>

int IsPrime(int m)
{
	/*判断是否为质数*/
	int i;
	int j = (int)sqrt(m);
	for (i=2; i<=j; i++)
	{
		if (0== m%i)
		{
			return 0;
		}
	}
	return 1;
}

void PrimeFactor(int n)
{
	//分解因式
	int i;
	int m = n;
	if (!IsPrime(m))
	{
		for (i=2; i<n; i++)
		{
			if (IsPrime(i))
			{
				while(0 == m%i && m)
				{
					printf("%d ",i);
					m /= i;
				}
			}
		}
	}
	else
	{
		printf("您输入的数据有误！\n");
		exit(0);
	}
}

int main(void)
{
	/*主函数作为驱动函数*/
	int a;
	printf("请输入一个合数：\n");
	scanf("%d",&a);
	PrimeFactor(a);
	getch();
	return 0;
}