/*chengji*/

#include <stdio.h>

void main(void)
{
	float chengji;
	scanf("%f",&chengji);
	if(chengji>=0 && chengji<=100)
	{
		if(chengji >= 90)
		{
			printf("A\n");
		}
		if(chengji<90 && chengji>=80)
		{
			printf("B\n");
		}
		if(chengji>=70 && chengji<80)
		{
			printf("C\n");
		}
		if(chengji>=60 && chengji<70)
		{
			printf("D\n");
		}
		if(chengji < 60)
		{
			printf("E\n");
		}
	}
	else 
	{
		printf("³É¼¨ÊäÈë´íÎó£¡\n");
	}
	
	return ;
}