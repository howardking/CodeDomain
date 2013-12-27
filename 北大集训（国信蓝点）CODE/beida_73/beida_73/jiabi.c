#include <stdio.h>

int JiaBi(int arr[], int m, int n)
{
	int i;
	int sumOne = 0;
	int sumTwo = 0;
	int sumThr = 0;
	if (0== (n-m+1)%2)
	{
		if (m+1 == n)
		{
			if (arr[m]<arr[n])
			{
				return m+1;
			}
			else
			{
				return n+1;
			}
		}
		for (i=m; i<=m+(m-n)/2; i++)
		{
			sumOne += arr[i];
		}
		for (i=m+(m-n)/2+1; i<=n; i++)
		{
			sumTwo += arr[i];
		}
		if (sumOne>sumTwo)
		{
			return JiaBi(arr,m+(m-n)/2+1,n);
		}
		else
		{
			return JiaBi(arr,m,m+(m-n)/2);
		}
	}
	if (0 != (n-m+1)%2)
	{
		sumThr = arr[m+(m-n)/2];
		for (i=m; i<m+(m-n)/2-1; i++)
		{
			sumOne += arr[i];
		}
		for (i=m+(m-n)/2+1; i<n; i++)
		{
			sumTwo += arr[i];
		}
		if (sumOne>sumTwo)
		{
			return JiaBi(arr,m+(m-n)/2+1,n);
		}
		if (sumOne<sumTwo)
		{
			return JiaBi(arr,m,m+(m-n)/2-1);
		}
		if (sumOne+sumThr==sumTwo+sumThr)
		{
			return m+(m-n)/2+1;
		}
	}
}

int main(void)
{
	/*Ñ°ÕÒ¼Ù±Ò*/
	int jiaBi;
	int arr[30] = {2,2,1,2,2,2,2,2,2,2,
				   2,2,2,2,2,2,2,2,2,2,
				   2,2,2,2,2,2,2,2,2,2};
	jiaBi = JiaBi(arr,0,29);
	printf("¼Ù±ÒÊÇµÚ%d¸ö\n",jiaBi);
	getch();
	return 0;
}