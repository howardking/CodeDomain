#include <stdio.h>
#include <math.h>

void Sum(int n)
{
	int i;
	int j;
	int flag = 0;
	int k = sqrt(n);
	for (i=0; i<k; i++)
	{
		for (j=i; j<k; j++)
		{
			if (i*i+j*j == n)
			{
				flag = 1;
				printf("\n%d^2+%d^2 = %d ",i,j,n);
			}
		}
	}
	if (!flag)
	{
		printf("\n%d 不能被分解成两个数的平方和的形式\n",n);
	}
}

int main(void)
{
	/*找出所有可以把N化成两个数的平方和*/
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	Sum(n);
	getch();
	return 0;
}