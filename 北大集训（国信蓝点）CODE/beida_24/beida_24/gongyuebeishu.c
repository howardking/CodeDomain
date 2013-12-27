#include <stdio.h>

void Cal(int a, int b)
{
	/*求最大公约数和最小公倍数*/
	int temp;
	int tempA = a;
	int tempB = b;
	if (tempA<tempB)
	{
		temp = tempA;
		tempA = tempB;
		tempB = temp;
	}
	while (tempA>tempB)
	{
		tempA = tempA - tempB;
		if (tempA<tempB)
		{
			temp = tempA;
			tempA = tempB;
			tempB = temp;
		}
	}
	if (tempA)
	{
		printf("最大公约数是：%d\n",tempA);
	}
	printf("最小公倍数是：%d\n",a*b/tempA);
}

int main(void)
{
	int m;
	int n;
	printf("请输入两个正整数：\n");
	scanf("%d%d",&m,&n);
	Cal(m,n);
	getch();
	return 0;
}