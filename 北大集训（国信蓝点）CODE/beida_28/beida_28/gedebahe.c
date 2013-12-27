#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	/*判断该数是不是素数*/
	int i;
	int flag;
	int j = (int)sqrt(n);
	flag = 1;
	for (i=2; i<=j; i++)
	{
		if (0 == n%i)
		{
			flag = 0;
		}
	}
	return flag;
}

void IsGoldBach(int a)
{
	/*判断是不是两素数和相加的形式并输出*/
	int i;
	for (i=2; i<=a-2; i++)
	{
		if (IsPrime(i))
		{
			if (IsPrime(a-i))
			{
				printf("%d = %d + %d\n",a,i,a-i);
				break;
			}
		}
	}
	return ;
}

void TestPru(int i, int j)
{
	/*产生验证所需要的所有大于2的偶数*/
	if(i <= 2)
	{
		i += 2;
	}
	for (i; i<=j; i+=2)
	{
		IsGoldBach(i);
	}
}

int main(void)
{
	/*驱动函数，main函数来输入要测试的局部范围*/
	int m;
	int n;
	printf("请输入两个正偶数:\n");
	scanf("%d%d",&m,&n);
	if (m>=n && 0!=m%2 && 0!=n%2)
	{
		printf("输入错误!!!\n");
		return -1;
	}
	else
	{
		printf("%d~%d之内的偶数可换成：\n",m,n);
		TestPru(m,n);
	}
	getch();
	return 0;
}