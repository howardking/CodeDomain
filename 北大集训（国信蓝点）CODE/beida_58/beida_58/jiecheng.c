#include <stdio.h>

int Factorial(int n)
{
	if (0 == n)
	{
		return 1;
	}
	else 
	{
		return n * Factorial (n-1);
	}
}

int main(void)
{
	/*µÝ¹é·¨Çó10£¡*/
	int n = Factorial(10);
	printf ("10! = %d",n);
	getch();
	return 0;
}