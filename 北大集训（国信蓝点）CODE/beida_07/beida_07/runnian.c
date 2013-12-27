#include <stdio.h>

int main(void)
{
	int curYear;
	scanf("%d",&curYear);

	if (0==curYear%4 && 0!=curYear%100 || 0==curYear%400)
	{
		printf("%d年是闰年\n",curYear);
	}
	else 
	{
		printf("%d年不是闰年\n",curYear);
	}
	
	return 0;
}