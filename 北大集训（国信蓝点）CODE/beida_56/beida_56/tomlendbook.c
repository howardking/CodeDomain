#include <stdio.h>

void LentBook(void)
{
	int i;
	int j;
	int k;
	int book[5] = {1,2,3,4,5};
	printf("借书的方案有：\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			for (k=0; k<5;k++)
			{
				if ((i!=j && i!=k) && (j!=k))
				{
					printf("(%d,%d,%d) ",book[i],book[j],book[k]);
				}
			}
		}
	}
}

int main(void)
{
	LentBook();
	getch();
	return 0;
}