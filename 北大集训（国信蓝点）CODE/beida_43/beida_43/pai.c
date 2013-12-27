#include <stdio.h>
#include <math.h>

void Cal(void)
{
	int i;
	int m;
	int level;
	double x;
	double pai;
	level = 4;
	x = sqrt(2)/2;
	printf("请输入近似值得精确度：");
	scanf("%d",&m);
	for (i=0; i<m; i++)
	{
		x = sqrt(2.0-2.0*sqrt(1.0-x*x))/2.0;
		level *= 2;
	}
	pai = (x*level)/1;
	printf("π的近似值是：%f\n",pai);
}

int main(void)
{
	/*用割补法求π*/
	Cal();
	getch();
	return 0;
}