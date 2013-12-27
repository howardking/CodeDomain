#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int buf[7];
	int tmp[7];
	for (i=0; i<=6; i++)
	{
		if (0==i)
		{
			printf("%d",1);
		}
		else if (1 == i)
		{
			printf("\n%d %d\n",1,1);
			buf[0] = 1;
			buf[1] = 1;
		}
		else 
		{
			for (j=1; j<=i+1; j++)
			{
				/*´òÓ¡Ò»ÐÐ*/
				if (1==j || j==i+1)
				{
					printf("%d ",1);
					tmp[j-1] = 1;
				}
				else 
				{
					printf("%d ",buf[j-2]+buf[j-1]);
					tmp[j-1] = buf[j-2] + buf[j-1];
				}
			}
			printf("\n");
			for (k=0; k<7; k++)
			{
				buf[k] = tmp[k];
			}
		}
	}
	getch();
	return 0;
}