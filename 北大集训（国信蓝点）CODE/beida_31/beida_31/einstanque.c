#include <stdio.h>

int main(void)
{
	/*爱因斯坦至少多少个阶梯的问题*/
	int i;
	for (i=7;;i+=7)
	{
		if(1==i%2 && 2==i%3 && 4==i%5 && 5==i%6)
		{
			printf("台阶数至少是：%d\n",i);
			break;
		}
	}
	getch();
	return 0;
}