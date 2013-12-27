#include <stdio.h>

int FactorSum(int n)
{
	/*�����Ӻ�*/
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
	/*�ж��ǲ���������*/
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
	/*��1-3000֮�ڵ�������*/
	Friendly();
	getch();
	return 0;
}