#include <stdio.h>

int main(void)
{
	int x;          //����
	int y;			//Ů��
	int z;			//С��
	printf("���� Ů�� С��\n");
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