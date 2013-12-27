#include <stdio.h>
#include <math.h>

int SiFangOne(int n)
{
	int m = sqrt(n);
	if (m*m == n)
	{
		printf ("%d = %d^2 ",n,m);
		return 1;
	}
	return 0;
}

int SiFangTwo(int n)
{
	int i;
	int j;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			if (i*i+j*j == n)
			{
				printf("%d = %d^2+%d^2 ",n,i,j);
				return 1;
			}
		}
	}
	return 0;
}

int SiFangThr(int n)
{
	int i;
	int j;
	int k;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			for (k=j; k<m; k++)
			{
				if (i*i+j*j+k*k == n)
				{
					printf("%d = %d^2+%d^2+%d^2 ",n,i,j,k);
					return 1;
				}
			}
		}
	}
	return 0;
}

int SiFangFur(int n)
{
	int i;
	int j;
	int k;
	int l;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			for (k=j; k<m; k++)
			{
				for (l=k; l<m; l++)
				{
					if (i*i+j*j+k*k+l*l == n)
					{
						printf("%d = %d^2+%d^2+%d^2+%d^2 ",n,i,j,k,l);
						return 1;
					}	
				}
				
			}
		}
	}
	return 0;
}

int main(void)
{
	/*验证四方定理*/
	int n;
	printf("qing输入要验证的数：");
	scanf("%d",&n);
	if (SiFangOne(n))
	{
		printf("四方定理已验证：\n");
		exit(0);
	}
	if (SiFangTwo(n))
	{
		printf("四方定理已验证：\n");
		exit(0);
	}
	if (SiFangThr(n))
	{
		printf("四方定理已验证：\n");
		exit(0);
	}
	if (SiFangFur(n))
	{
		printf("四方定理已验证：\n");
		exit(0);
	}
	getch();
	return 0;
}