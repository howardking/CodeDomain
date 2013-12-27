#include <stdio.h>

/*void Sort(int arr[],int n)
{
	int i;
	int j;
	int temp;
	for (i=0; i<n; i++)
		for (j=n-1; j>i; j--)
		{
			if (arr[j]<arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
}*/
void Sort (int arr[],int n);
int main(void)
{
	int i;
	int arr[11] = {111,9,8,6,5,7,4,2,3,1,0};
	Sort (arr,10);
	for (i=1; i<11; i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}

void Sort (int arr[],int n)
{
	int j;
	int i;
	for (i=2; i<=n; i++)
	{
		j = i-1;
		arr[0] = arr[i];
		while (j>0 && arr[0]>arr[j])
		{
			arr[j+1] = arr[j--];
		}
		arr[j+1] = arr[0];
	}
}