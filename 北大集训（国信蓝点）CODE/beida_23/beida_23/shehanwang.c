#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	double sum = 0.0;
	for (i=1; i<=64; i++)
	{
		sum += pow(2,i-1);
	}
	printf("%f\n",sum);
	return 0;
}