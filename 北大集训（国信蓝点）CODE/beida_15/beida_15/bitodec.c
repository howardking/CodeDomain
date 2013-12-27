#include <stdio.h>

void deToBi(int a)
{
	int i = 0;
	int stack[10];
	int r;
	int s;
	do{
		r = a/2;
		s = a%2;
		stack[i] = s;
		if (0 != r)
		{
			i++;
			a = r;
		}
	}while (r);
	for (; i>=0; i--)
	{
		printf("%d",stack[i]);
	}
	printf("\n");
}

int main(void)
{
	int a;
	printf("请输入一个十进制数：\n");
	scanf("%d",&a);
	deToBi(a);
	getch();
	return 0;
}












#include <stdio.h>

int main(void)
{
	int or;
	int p;
	int temp;
	int i = 0;
	int arr[32] ;
	printf("请输入一个十进制整数：\n");
	scanf("%d",&or);
	p = or;
	while (p)
	{
		temp = p%2;
		p = p/2;
		arr[i] = temp;
		i++;
	}
	printf("转换后的二进制数为：\n");
	for (i--; i>=0; i--)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n");
	//getch();
	return 0;
}