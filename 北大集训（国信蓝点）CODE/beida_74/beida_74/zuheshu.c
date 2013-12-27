#include <stdio.h>

int main(void)
{
	/*球排列组合*/
	int m;
	int n;
	int k;
	int result1 = 1;
	int result2 = 1;
	printf("请输入m、n的值（m>n）：");
	scanf ("%d%d",&m,&n);
	if (n>m)
	{
		printf("输入错误!!");
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