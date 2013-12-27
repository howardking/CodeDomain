#include <stdio.h>

int main(void)
{
	int x;          //男人
	int y;			//女人
	int z;			//小孩
	printf("男人 女人 小孩\n");
	for (x=1; x<17; x++)
		for (y=1; y<24; y++)
			for (z=1; z<29; z++)
			{
				if (30==x+y+z&&50==3*x+2*y+z)
				{
					printf("%2d%5d%5d \n",x,y,z);
				}
			}
	getch();
	return 0;
}