#include <stdio.h>

void PerfectNum(void)
{
	int i;
	int j;
	int sum;
	for (i=4; i<1000; i++)
	{
		sum = 0;
		for (j=1; j<i; j++)
		{
			if (0 ==i%j)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d  ",i);
		}
	}
}

int main(void)
{
	PerfectNum();
	getch();
	return 0; 
}