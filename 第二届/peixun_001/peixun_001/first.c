/***********************************************************/
/*   ������windows xp��32λ���£�������������ռ���ֽ���    */
/*   �������ڣ�2011-4-17*/
/*   ���ߣ���˧��*/
/*   �汾��1.0.0*/
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

