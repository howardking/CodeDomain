/***********************************************************/
/*   测试在windows xp（32位）下，i++,i--的各种运算         */
/*   创建日期：2011-4-17*/
/*   作者：王帅华*/
/*   版本：1.0.0*/
/**********************************************************/
#include "stdio.h"

int main(void)
{
	int i = 0;
	int j = 0;

	printf("在i++(--)前的i值:i = %d\n",i);
	printf("i++ = %d,++i = %d,i-- = %d,--i = %d\n",i++,++i,(i--),(--i));
	printf("i++ = %d,++i = %d,--i = %d,i-- = %d\n",i++,++i,(--i),(i--));


	getch();

	return 0;
}