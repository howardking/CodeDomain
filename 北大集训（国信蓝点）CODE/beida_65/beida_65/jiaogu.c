#include <stdio.h>

void ProJiaoGu(int m)
{
	int i = 0;
	int n = m;
	while (i<10000 && 1!=n)
	{
		if (0== n%2)
		{
			printf("%d/2 = %d\n",n,n/2);
			n /= 2;
		}
		else
		{
			printf("%d*3+1 = %d\n",n,3*n+1);
			n = 3*n+1;
		}
		i++;
	}
	if (i<10000)
	{
		printf("���ǽǹȲ��롣\n");
	}
}

int main(void)
{
	/*��֤�ǹȶ���*/
	int m;
	printf("������һ������֤������");
	scanf("%d",&m);
	ProJiaoGu(m);
	getch();
	return 0;
}