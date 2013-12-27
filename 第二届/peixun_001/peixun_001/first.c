/***********************************************************/
/*   测试在windows xp（32位）下，各数据类型所占的字节数    */
/*   创建日期：2011-4-17*/
/*   作者：王帅华*/
/*   版本：1.0.0*/
/**********************************************************/
#include "stdio.h"

int main(void)
{
	short shortElements;
	int intElements;
	char charElements;
	float floatElements;
	double doubleElements;
	long int longint;
	long long int longLong;
	printf("short = %d\n",sizeof(short));
	printf("int = %d\n",sizeof(intElements));
	printf("char = %d\n",sizeof(char));
	printf("float = %d\n",sizeof(floatElements));
	printf("double = %d\n",sizeof(doubleElements));
	printf("long int = %d\n",sizeof(longint));
	printf("long long int = %d\n",sizeof(longLong));
	getch();
	return 0;
}

