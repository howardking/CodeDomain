#include <stdio.h>

int main(void)
{
	/*�ǵݹ���10��*/
	int i;
	int result = 1;
	for (i=1; i<=10; i++)
	{
		result *= i;
	}
	printf("10��= %d\n",result);
	getch();
	return 0;
}