#include <stdio.h>

void WhoLies(void)
{
	int a;
	int b;
	int c;
	for (a=0; a<2; a++)
	{
		for (b=0; b<2; b++)
		{
			for (c=0; c<2; c++)
			{
				if ((a&&!b || !a&&b) && (b&&!c || !b&&c) 
					&& (c&&a+b==0 || !c&&a+b!=0))
				{
					printf("¼× total a %s\n",a?"True":"lie");
					printf("ÒÒ total a %s\n",b?"True":"lie");
					printf("±û total a %s\n",c?"True":"lie");
				}
			}
		}
	}
}

int main(void)
{
	WhoLies();
	getch();
	return 0;
}
