#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	/*�жϸ����ǲ�������*/
	int i;
	int flag;
	int j = (int)sqrt(n);
	flag = 1;
	for (i=2; i<=j; i++)
	{
		if (0 == n%i)
		{
			flag = 0;
		}
	}
	return flag;
}

void IsGoldBach(int a)
{
	/*�ж��ǲ�������������ӵ���ʽ�����*/
	int i;
	for (i=2; i<=a-2; i++)
	{
		if (IsPrime(i))
		{
			if (IsPrime(a-i))
			{
				printf("%d = %d + %d\n",a,i,a-i);
				break;
			}
		}
	}
	return ;
}

void TestPru(int i, int j)
{
	/*������֤����Ҫ�����д���2��ż��*/
	if(i <= 2)
	{
		i += 2;
	}
	for (i; i<=j; i+=2)
	{
		IsGoldBach(i);
	}
}

int main(void)
{
	/*����������main����������Ҫ���Եľֲ���Χ*/
	int m;
	int n;
	printf("������������ż��:\n");
	scanf("%d%d",&m,&n);
	if (m>=n && 0!=m%2 && 0!=n%2)
	{
		printf("�������!!!\n");
		return -1;
	}
	else
	{
		printf("%d~%d֮�ڵ�ż���ɻ��ɣ�\n",m,n);
		TestPru(m,n);
	}
	getch();
	return 0;
}