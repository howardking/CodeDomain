#include <stdio.h>

int main(void)
{
	/*
	°ÙÇ®°×¼¦ÎÊÌâ
	*/
	int cook;
	int hen;
	int childhen;
	for (cook=0; cook<=20; cook++)
		for(hen=0; hen<=33; hen++)
			for(childhen=3; childhen<=100; childhen+=3)
				if(100==(cook+hen+childhen) && 100==(5*cook+3*hen+childhen/3))
				{
					printf("cook=%d,hen=%d,childhen=%d\n",cook,hen,childhen);
				}
	getch();
	return 0;
}