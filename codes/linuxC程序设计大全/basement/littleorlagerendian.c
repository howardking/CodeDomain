/*Description:This program is used to show you computer is little-endian or high-endian
Auther: Root Wang
Time: 2012-1-26
Version:1.0
*/

#include "stdio.h"

int main(void){
	int a = 0x0010;
	char c = (char)(*(&a));//==char c = (char)a;

	printf("%x\n",c);
	return 0;
}
