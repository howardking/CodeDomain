#include <stdio.h>

void Peach(void)
{
	int i;
	int sum = 1;
	for (i=10; i>1; i--)
	{
		sum = (sum + 1)*2;
	}
	printf("��һ�����ӵĸ����ǣ�%d\n",sum);
}

int main(void)
{
	/*���ӳ�������*/
	Peach();
	getch();
	return 0;
}