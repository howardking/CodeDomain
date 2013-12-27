#include <stdio.h>
#include <math.h>

int IsPrime(int m)
{
	/*�ж��Ƿ�Ϊ����*/
	int i;
	int j = (int)sqrt(m);
	for (i=2; i<=j; i++)
	{
		if (0== m%i)
		{
			return 0;
		}
	}
	return 1;
}

void PrimeFactor(int n)
{
	//�ֽ���ʽ
	int i;
	int m = n;
	if (!IsPrime(m))
	{
		for (i=2; i<n; i++)
		{
			if (IsPrime(i))
			{
				while(0 == m%i && m)
				{
					printf("%d ",i);
					m /= i;
				}
			}
		}
	}
	else
	{
		printf("���������������\n");
		exit(0);
	}
}

int main(void)
{
	/*��������Ϊ��������*/
	int a;
	printf("������һ��������\n");
	scanf("%d",&a);
	PrimeFactor(a);
	getch();
	return 0;
}