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
	/*�õݹ�Ѷ�������ת����ʮ������*/
	int sum;
	int m;
	sum = 0;
	m = 0;
	printf("������һ���˶���������#�������룺");
	BiToDe(0,&sum,&m);
	printf("�����ʮ�������ǣ�%d",sum);
	getch();
	return 0;
}