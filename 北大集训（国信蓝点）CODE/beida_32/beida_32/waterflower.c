#include <stdio.h>

void Flower(void)
{
	int i;
	int bai;
	int shi;
	int ge;
	for (i=100; i<1000; i++)
	{
		bai = i/100;
		shi = i%100/10;
		ge = i%10;
		if (bai*bai*bai+shi*shi*shi+ge*ge*ge==i)
		{
			printf("%d\n",i);
		}
	}
}
int main(void)
{
	printf("ˮ�ɻ����ǣ�\n");
	Flower();
	getch();
	return 0;
}