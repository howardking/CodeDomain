#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*用来查看函数putchar的返回值*/
    int flag = 0;
    char ch = 'a';
    flag = putchar(ch);
    printf("\n%c \n",flag);
    //经测试可知putchar函数的返回值为函数输出的字符；
    return 0;
}
