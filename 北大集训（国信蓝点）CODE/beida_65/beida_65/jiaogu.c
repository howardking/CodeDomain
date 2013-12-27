#include <stdio.h>

void ProJiaoGu(int m)
{
	int i = 0;
	int n = m;
	while (i<10000 && 1!=n)
	{
		if (0== n%2)
		{
			printf("%d/2 = %d\n",n,n/2);
			n /= 2;
		}
		else
		{
			printf("%d*3+1 = %d\n",n,3*n+1);
			n = 3*n+1;
		}
		i++;
	}
	if (i<10000)
	{
		printf("这是角谷猜想。\n");
	}
}

int main(void)
{
	/*验证角谷定理*/
	int m;
	printf("请输入一个待验证的数：");
	scanf("%d",&m);
	ProJiaoGu(m);
	getch();
	return 0;
}