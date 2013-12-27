#include <stdio.h>

int main(void)
{
	int red;
	int yellow;
	int green;
	printf("RED  YELLOW  GREEN\n");
	for (red=0; red<4; red++)
		for (yellow=0; yellow<4; yellow++)
			for (green=2; green<7; green++)
		{
			if (8==red+yellow+green)
				printf("%   d%6d%8d\n",red,yellow,green);
		}
	getch();
	return 0;
}