#include <stdio.h>

int main(void)
{
	int curYear;
	scanf("%d",&curYear);

	if (0==curYear%4 && 0!=curYear%100 || 0==curYear%400)
	{
		printf("%d��������\n",curYear);
	}
	else 
	{
		printf("%d�겻������\n",curYear);
	}
	
	return 0;
}