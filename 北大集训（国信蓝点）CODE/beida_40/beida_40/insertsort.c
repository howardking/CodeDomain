#include <stdio.h>

void InsertSort (int a[], int n)
{
	/*插入排序函数*/
	int i;
	int j;
	for (i=2; i<=n; i++)
	{
		a[0] = a[i];
		j = i-1;
		while (j>0 && a[0]<a[j])
		{
			a[j+1] = a[j--];
		}
		a[j+1] = a[0];
	}
}

int main(void)
{
	int i;
	int arr[11] = {111,9,6,3,8,5,2,7,4,1,0};
	InsertSort(arr,10);
	for (i=1; i<=10; i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}


/*#include <stdio.h>

void InsertSort(int arr[],int m)
{
	int i;
	int j = 0;
	int temp;
	for (i=0; i<m-1; i++)
	{
		if (arr[i]>arr[i+1])
		{
			j = i;
			//temp = arr[i+1];
			break;
		}
	}
	for (j; j<m-1; j++)
	{
		i = j;
		temp = arr[i+1];
		for (i; i>0; i--)
		{
			arr[i+1] = arr[i];
			if (temp<=arr[i+1] && temp>=arr[i-1])
			{
				arr[i] = temp;
				break;
			}
			if (temp<arr[0])
			{
				arr[1] = arr[0];
				arr[0] = temp;
			}
		}
	}
	printf("排序后的序列是：\n");
	for (i=0; i<m; i++)
	{
		printf("%d ",arr[i]);	
	}
	
	
}

int main(void)
{
	//此程序运行结果有错误
	int arr[10] = {3,6,9,8,5,2,1,4,7,0};
	InsertSort(arr,10);
	getch();
	return 0;
}*/