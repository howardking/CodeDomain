/***********************************************************/
/*   练习使用extern关键字调用变量和函数 （first.c）   */
/*   创建日期：2011-4-17*/
/*   作者：王帅华*/
/*   版本：1.0.0*/
/**********************************************************/

#include "stdio.h"

int i = 100;
int temp = 1000;
float k = 11;

void print(void)
{
	printf("%d\n",i);
	printf("%d\n",temp);
	printf("%f\n",k);
}