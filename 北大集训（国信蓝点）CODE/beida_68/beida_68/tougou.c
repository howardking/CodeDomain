#include <stdio.h>

void TongGou(void)
{
	int i;
	long result = 0;
	printf("1000֮�ڵ�ͬ�����У�\n");
	for (i=1; i<1000; i++)
	{
		result = i*i;
		if (i<10 && i>0)
		{
			result = result%10;
		}
		if (i<100 && i>=10)
		{
			result = result%100;
		}
		if (i<1000 && i>=100)
		{
			result = result%1000;
		}
		if (result == i)
		{
			printf("%d ",i);
		}
	}

}

int main(void)
{
	/*��1000���ڵ�ͬ����*/
	TongGou();
	getch();
	return 0;
}