#include <stdio.h>

int main(void)
{
	/*���������*/
	int m;
	int n;
	int k;
	int result1 = 1;
	int result2 = 1;
	printf("������m��n��ֵ��m>n����");
	scanf ("%d%d",&m,&n);
	if (n>m)
	{
		printf("�������!!");
		exit(0);
	}
	k = m-n;
	for (m; m>k; m--)
	{
		result1 *= m;
	}
	for (n; n>0; n--)
	{
		result2 *= n;
	}
	printf("%d\n",result1/result2);
	getch();
	return 0;
}