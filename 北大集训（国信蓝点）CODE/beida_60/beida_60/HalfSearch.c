#include <stdio.h>

int HalfSearch(int a[], int m, int n,int key)
{
	int k;
	int flag = 0;
	if (a[m] == key)
	{
		return flag = m+1;
	}
	if (a[n] == key)
	{
		return flag = n+1;
	}
	if (key > a[n] || key < a[m])
	{
		return 0;
	}
	k = (m+n)/2;
	if (a[k] == key)
	{
		return flag = k+1;
	}
	if (a[k] > key)
	{
		return flag = HalfSearch(a,m+1,k-1,key);
	}
	if (a[k] < key)
	{
		return flag = HalfSearch(a,k+1,n-1,key);
	}
	return 0;
}

int main(void)
{
	/*递归的折半查找算法*/
	int flag;
	int key;
	int arr[10] = {2,3,5,7,8,10,12,15,19,21};
	printf("请输入要查找的项：");
	scanf("%d",&key);
	flag = HalfSearch (arr,0,9,key);
	if (flag)
	{
		printf("所查找的数%d位于第%d个\n",key,flag);
	}
	else
	{
		printf("没有所要查的数。\n");
	}
	getch();
	return 0;
}