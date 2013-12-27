#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*用来查看函数puts的返回值*/
    int flag = 0;
    char source[10] = {'a'};
    flag = puts(source);
    printf("%d\n",flag);
    //经测试可知puts函数的返回值为:函数如果正确的输出则是0，如果函数输出不正确，则是-1
    return 0;
}
