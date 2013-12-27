#include <stdio.h>

void GetStep(int m[])
{
	int i;
	int j;
	int temp;
	for (i=0; i<7; i++)
	{
		for (j=0; j<7-i; j++)
			if (m[j]>=m[j+1])
			{
				temp = m[j];
				m[j] = m[j+1];
				m[j+1] = temp;
				printf("(%d# --> 0#)\n",j+1);
				printf("(%d# --> %d#)\n",j+2,j+1);
				printf("(0# --> %d#)\n",j+2);
			}
	}
	printf("\n");
}


void Print(int m[])
{
	printf("[%d]--[%d]--[%d]\n",m[0],m[1],m[2]);
	printf(" |  %c | %c  |\n",92,47);
	printf("[%d]--[ ]--[%d]\n",m[7],m[3]);
	printf(" |  %c | %c  |\n",47,92);
	printf("[%d]--[%d]--[%d]\n",m[6],m[5],m[4]);
}

int main(void)
{
	int i;
	int m[8];
	printf("请输入8个整数（1-8）：");
	for (i=0; i<8; i++)
	{
		scanf("%d",&m[i]);
	}
	printf("矩阵的初始状态是：\n");
	Print(m);
	printf("\n移动步骤：\n");
	GetStep(m);
	printf("移动结果是：\n");
	Print(m);
	getch();
	return 0;
}