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
	printf("���������ֵ�þ�ȷ�ȣ�");
	scanf("%d",&m);
	for (i=0; i<m; i++)
	{
		x = sqrt(2.0-2.0*sqrt(1.0-x*x))/2.0;
		level *= 2;
	}
	pai = (x*level)/1;
	printf("�еĽ���ֵ�ǣ�%f\n",pai);
}

int main(void)
{
	/*�ø�����*/
	Cal();
	getch();
	return 0;
}