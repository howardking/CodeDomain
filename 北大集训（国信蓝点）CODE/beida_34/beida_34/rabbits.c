#include <stdio.h>

void HowMany(void)
{
	int i;
	int arr[12];
	arr[0] = 1;
	arr[1] = 1;
	for (i=2; i<=11; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	printf("���������ǣ�%d\n",arr[11]);
}

int main(void)
{
	/*���Ӳ�������*/
	HowMany();
	getch();
	return 0;
}