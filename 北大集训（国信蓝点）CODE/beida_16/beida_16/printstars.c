#include <stdio.h>

void draw(int n)
{
	/*用来打印图像的函数*/
	int i;
	int j;
	int k;
	for (k=0; k<n; k++)
	{
		for (i=0; i<n-k; i++)
		{
			printf(" ");
		}
		for (j=0; j<2*k+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int main(void)
{
	int a;
	printf("请输入*的行数：\n");
	scanf("%d",&a);
	draw(a);
	getch();
	return 0;
}