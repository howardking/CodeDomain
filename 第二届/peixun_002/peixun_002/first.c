/***********************************************************/
/*   测试在windows xp（32位）下，检验malloc函数所分配内存空间*/
/*   所返回的是什么*/
/*   创建日期：2011-4-17*/
/*   作者：王帅华 */
/*   版本：1.0.0 */
/**********************************************************/
#include "stdio.h"

int main(void)
{
	char *p = malloc(10);
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(*p));
	printf("%d\n",sizeof(malloc(10)));
	getch();
	return 0;
}