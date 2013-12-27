#include <stdio.h>

void LinkInt(int m)
{
	int i;
	int j;
	int n;
	int sum;
	n = (m+1)/2;
	for (i=1; i<n; i++)
	{
		sum = 0;
		for (j=i; sum<m; j++)
		{
			sum += j;
		}
		if (sum == m)
		{
			printf("%d = %d+…+%d\n",m,i,j-1);
		}
	}
}

int main(void)
{
	/*连续整数的固定和问题*/
	int m;
	printf("请输入所要求连续整数和的整数：");
	scanf ("%d",&m);
	LinkInt(m);
	getch();
	return 0;
}