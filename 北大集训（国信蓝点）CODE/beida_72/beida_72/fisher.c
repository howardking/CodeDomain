#include <stdio.h>

int main(void)
{
	/*���������*/
	int i;
	int sum = 6;
	for (i=1; i<5; i++)
	{
		sum = sum*5+1;
	}
	printf("���һ������%d���㡣\n",sum);
	getch();
	return 0;
}