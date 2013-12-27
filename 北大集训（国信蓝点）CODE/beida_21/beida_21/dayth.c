#include <stdio.h>

void WhichDay(int year, int month, int day)
{
	int i;
	int sum=0;
	int monthDay[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
	if ((0==year%4 && 0!=year%100) || (0==year%400))
	{
		monthDay[2] = 29;
	}
	else 
	{
		monthDay[2] = 28;
	}
	for (i=1; i<month; i++)
	{
		sum += monthDay[i];
	}
	sum += day;
	printf("这是该年的第:%d天\n",sum);
}

int main(void)
{
	int gyear;
	int gmonth;
	int gday;
	printf("请输入年份：\n");
	scanf("%d%d%d",&gyear,&gmonth,&gday);
	WhichDay(gyear,gmonth,gday);

	getch();
	return 0;
}