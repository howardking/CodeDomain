#include <stdio.h>
#include <math.h>

void sum(int count)
{
	int i;
	double n = 1;
	double sum = 0.0;
	int mutl = 1;
	for (i=0; i<count; i++)
	{
		mutl *= (i+1);
		n *= (1.0/2);
		sum += mutl * n;
	}
	printf("级数的前n项和是：%f\n",sum);
	
}

int main(void)
{
	int a;
	printf("请输入级数的项数：\n");
	scanf("%d",&a);
	sum(a);
	getch();
	return 0;
}