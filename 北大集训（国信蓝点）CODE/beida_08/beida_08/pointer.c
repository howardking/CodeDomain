#include <stdio.h>
#define LEN 10

void inputArray(int *arr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

int main (void)
{
	int i;
	int arr[LEN];
	inputArray(arr,LEN);
	for (i=0; i<LEN;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}