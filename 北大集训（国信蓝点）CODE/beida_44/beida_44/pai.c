#include <stdio.h>
#include <stdlib.h>

void Cal(void)
{
	int n;
	int i;
	int count;
	double x;
	double y;
	double PI;
	printf("请输入要测试的点数：");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		x = random(101);
		y = random(101);
		if(10000 == x*x+y*y)
		{
			count++;
		}
	}
	PI = 4.0*count/n;
	printf("π的近似值是：%f\n",PI);

}

int main(void)
{
	Cal();
	getch();
	return 0;
}