#include <stdio.h>

void Count(void)
{
	long int i;
	int j;
	int re;
	int de;
	int qian;
	int bai;
	int shi;
	int ge;
	for (re=1000; re<=10000; re++)
	{
		for(j=1; j<10;j++)
		{
			i = re * j;
			if (i>=10000)
			{
				continue;
			}
			qian = i/1000;
			bai = i%1000/100;
			shi = i%100/10;
			ge = i%10;
			if (qian!=bai && qian!=shi && qian!=ge && bai!=shi && bai!=ge && shi!=ge && 
				qian!=j && bai!=j && shi!=j && ge!=j)
			{
				de = ge*1000+shi*100+bai*10+qian;
				if (de == re)
				{
					printf("%4d\n",re);
					printf("x%3d\n",j);
					printf("-----\n");
					printf("%4d\n",i);
				}
			}			
		}
		
	}
}

int main(void)
{
	/*
	����һ����λ������ͬ����λ������һ���������λ����λ������ͬ��
	��Ҫ������ΪԪ��λ��������
	*/
	Count();
	getch();
	return 0;
}