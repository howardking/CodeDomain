#include <stdio.h>

void Nicoqish(int m)
{
	int i;
	int j;
	int k;
	int n;
	int sum;
	n = m*m*m;
	for (i=1;i<n; i+=2)
	{
		sum = 0;
		j = i;
		while (j<n && sum<n)
		{
			sum += j;
			j += 2;
		}
		if (sum == n)
		{
			for (k=i; k<j-2; k+=2)
			{
				printf("%d+",k);
			}
			printf("%d ",j-2);
			break;
		}
	}
}

void main(void)
{
	/*��֤��Ƴ�˹����*/
	int m;
	printf("������һ������");
	scanf("%d",&m);
	printf("%d = ",m*m*m);
	Nicoqish(m);
	getch();
	return 0;
}