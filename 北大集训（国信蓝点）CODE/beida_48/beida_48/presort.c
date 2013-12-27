#include <stdio.h>
#define MAX 100

void Pem(int a[], int n, int s, int r[], int m)
{
	int i;
	int j;
	int k;
	int b[MAX];
	int flag = 0;
	for (i=0; i<n; i++)
	{
		flag = 1;
		r[s] = a[i];
		j = 0;
		for (k=0; k<n; k++)
			if (i!=k)
			{
				b[j] = a[k];
				j++;
			}
		Pem(b,n-1,s+1,r,m);
	}
	if (0 == flag)
	{
		printf("\n");
		for (k=0; k<m; k++)
		{
			printf("%d  ",r[k]);
		}
		printf("\n");
	}
}

int main(void)
{
	/*用递归法求全排列*/
	int i;
	int n;
	int a[MAX];
	int r[MAX];
	printf("请输入数组中待排列的元素的个数：\n");
	scanf("%d",&n);
	printf("请输入待排列的数：\n");
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	Pem(a,n,0,r,n);
	getch();
	return 0;
}