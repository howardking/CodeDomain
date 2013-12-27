#include <stdio.h>

int GetMin(int arr[], int n)
{
	int valu1;
	int valu2;
	int valu3;
	if (1 ==n)
	{
		return arr[0];
	}
	if (0== n%2)
	{
		valu1 = GetMin(arr,n/2);
		valu2 = GetMin(arr+n/2,n/2);
		if (valu1<valu2)
		{
			return valu1;
		}
		else
		{
			return valu2;
		}
	}
	if (0 != n%2)
	{
		valu1 = GetMin(arr,n/2);
		valu2 = GetMin(arr+n/2+1,n/2);
		valu3 = arr[n/2];
		if (valu1<valu2)
		{
			if (valu1<valu3)
			{
				return valu1;
			}
			else
			{
				return valu3;
			}
		}
		else
		{
			if (valu2<valu3)
			{
				return valu2;
			}
			else
			{
				return valu3;
			}
		}
	}
}

int main(void)
{
	/*用递归法求一个数列中的数的最小值*/
	int va;
	int arr[9] = {11,13,23,56,8,23,11,23,111};
	va = GetMin(arr,9);
	printf("%d",va);
	getch();
	return 0;
}