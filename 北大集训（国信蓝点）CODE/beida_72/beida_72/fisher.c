#include <stdio.h>

int main(void)
{
	/*渔夫捕鱼问题*/
	int i;
	int sum = 6;
	for (i=1; i<5; i++)
	{
		sum = sum*5+1;
	}
	printf("渔夫一共捕了%d条鱼。\n",sum);
	getch();
	return 0;
}