#include <stdio.h>

void SelectSort(int arr[],int n)
{
	int i;
	int j;
	int min;
	int temp;
	for (i=0; i<n; i++)
	{
		min = arr[i];
		for (j=i+1; j<n; j++)
		{
			if (min>arr[j])
			{
				temp = min;
				min = arr[j];
				arr[j] = temp;
			}
		}
		arr[i] = min;
	}
}

int main(void)
{
	int i;
	int arr[10] = {9,5,2,4,8,7,3,6,1,0};
	SelectSort(arr,10);
	for (i=0; i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}