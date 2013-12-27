#include <stdio.h>

void Translation_B(long a);
void Translation_C(long b);

char data_1[19][10] = {"one","two","three","for","five","six",
						"seven","eight","night","ten","eleven",
						"twelve","thirteen","forteen","fifteen",
						"sixteen","seventeen","eighteen","nighteen"};
char data_2[8][7] = {"twenty","thirty","forty","fifty","sixty",
					"seventy","eighty","nighty"};

void Translation_A(long N)
{
	long a;
	if (N==0)
	{
		printf("Zero\n");
		exit(0);
	}
	a = N/1000;
	if (a!=0)
	{
		Translation_B(a);
		printf("Thousand ");
	}
	a = N%1000;
	if (a!=0)
	{
		Translation_B(a);
	}
}

void Translation_B(long a)
{
	long b;
	b = a/100;
	if (b!=0)
	{
		Translation_C(b);
		printf("Hundred ");
	}
	b = a%100;
	if (0!=b)
	{
		Translation_C(b);
	}
}

void Translation_C(long b)
{
	long c;
	if (b<=19)
	{
		printf("%s ",data_1[b-1]);
	}
	else 
	{
		c = b/10;
		printf("%s ",data_2[c-2]);
		c = b%10;
		if (0!=c)
		{
			printf("%s ",data_1[c-1]);
		}
	}
}

int main(void)
{
	/*把数字翻译成英文*/
	long N;
	printf("请输入一个整数0-999999：\n");
	scanf("%ld",&N);
	Translation_A(N);
	getch();
	return 0;
}