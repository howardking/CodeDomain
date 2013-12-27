#include <stdio.h>

void Peach(void)
{
	int i;
	int sum = 1;
	for (i=10; i>1; i--)
	{
		sum = (sum + 1)*2;
	}
	printf("第一天桃子的个数是：%d\n",sum);
}

int main(void)
{
	/*猴子吃桃问题*/
	Peach();
	getch();
	return 0;
}