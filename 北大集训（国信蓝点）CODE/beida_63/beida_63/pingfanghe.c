#include <stdio.h>
#include <math.h>

void Sum(int n)
{
	int i;
	int j;
	int flag = 0;
	int k = sqrt(n);
	for (i=0; i<k; i++)
	{
		for (j=i; j<k; j++)
		{
			if (i*i+j*j == n)
			{
				flag = 1;
				printf("\n%d^2+%d^2 = %d ",i,j,n);
			}
		}
	}
	if (!flag)
	{
		printf("\n%d ���ܱ��ֽ����������ƽ���͵���ʽ\n",n);
	}
}

int main(void)
{
	/*�ҳ����п��԰�N������������ƽ����*/
	int n;
	printf("������һ��������");
	scanf("%d",&n);
	Sum(n);
	getch();
	return 0;
}