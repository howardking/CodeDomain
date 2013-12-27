#include <stdio.h>

int main(void)
{
	/*∑«µ›πÈ«Û10£°*/
	int i;
	int result = 1;
	for (i=1; i<=10; i++)
	{
		result *= i;
	}
	printf("10£°= %d\n",result);
	getch();
	return 0;
}