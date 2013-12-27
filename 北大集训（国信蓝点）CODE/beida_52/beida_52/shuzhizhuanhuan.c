#include <stdio.h>
#include <math.h>

void BiToDe(int n, int *sum, int *m)
{
	char c;
	scanf ("%c",&c);
	if (c != '#')
	{
		*m = *m + 1;
		BiToDe(n+1, &(*sum), &(*m));
	}
	if ('1' == c)
	{
		*sum = *sum + pow(2,(*m)-n-1);
	}
}

int main(void)
{
	/*用递归把二进制数转换成十进制数*/
	int sum;
	int m;
	sum = 0;
	m = 0;
	printf("请输入一个人二进制数以#结束输入：");
	BiToDe(0,&sum,&m);
	printf("换算成十进制数是：%d",sum);
	getch();
	return 0;
}