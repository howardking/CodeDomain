#include <stdio.h>

void Cal(int a, int b)
{
	/*�����Լ������С������*/
	int temp;
	int tempA = a;
	int tempB = b;
	if (tempA<tempB)
	{
		temp = tempA;
		tempA = tempB;
		tempB = temp;
	}
	while (tempA>tempB)
	{
		tempA = tempA - tempB;
		if (tempA<tempB)
		{
			temp = tempA;
			tempA = tempB;
			tempB = temp;
		}
	}
	if (tempA)
	{
		printf("���Լ���ǣ�%d\n",tempA);
	}
	printf("��С�������ǣ�%d\n",a*b/tempA);
}

int main(void)
{
	int m;
	int n;
	printf("������������������\n");
	scanf("%d%d",&m,&n);
	Cal(m,n);
	getch();
	return 0;
}