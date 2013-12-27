#include <stdio.h>

void Print(void)
{
	char c;
	scanf("%c",&c);
	if ('#' != c)
	{
		Print();
	}
	if ('#' != c)
	{
		printf("%c",c);
	}
}

int main(void)
{
	Print();
	return 0;
}