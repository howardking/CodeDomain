#include <stdio.h>

int FactorSum(int n)
{
	/*求因子和*/
	int i;
	int sum = 0;
	for (i=1; i<n; i++)
	{
		if (0 == n%i)
		{
			sum += i;
		}
	}
	return sum;
}

void Friendly(void)
{
	/*判断是不是亲密数*/
	int i;
	int factorSumOne;
	int factorSumTwo;
	for (i=2; i<3000; i++)
	{
		factorSumOne = FactorSum(i);
		factorSumTwo = FactorSum(factorSumOne);
		if (i == factorSumTwo && i != factorSumOne)
		{
			printf("(%d, %d)  ",i,factorSumOne);
		}
	}
}

int main(void)
{
	/*求1-3000之内的亲密数*/
	Friendly();
	getch();
	return 0;
}