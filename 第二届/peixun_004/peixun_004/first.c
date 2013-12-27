/***********************************************************/
/*   测试在windows xp（32位）下，指针的用法    */
/*   创建日期：2011-4-20*/
/*   作者：王帅华*/
/*   版本：1.0.0*/
/**********************************************************/

#include "stdio.h"

int main(void)
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	int * p = arr;

	printf("The length of arr[10](use sizeof method):%d\n",sizeof(arr));
	printf("The length of pointer:%d\n",sizeof(*p));
	printf("At the beginning ,*arr = %d\n",*arr);
	printf("*p++ = %d\n",*p++);
	p--;
	printf("*(p++) = %d\n",*(p++));
	arr[i] = i++;
	i--;
	printf("arr[%d] = %d\n",i,arr[i]);
	for (i=0; i<10; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}

	getch();

	return 0;
}