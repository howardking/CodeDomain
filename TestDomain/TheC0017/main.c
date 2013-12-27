#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*用来查看函数scanf的返回值*/
    //int i = 0;
    int flag = 0;
    char source[10] ;
    char destnation[10];
    printf("在调用scanf函数之前：\n");
    printf("%s    %d\n",source,flag);
    flag = scanf("%s%s",destnation,source);
    printf("在调用strcmp函数之后：\n");
    printf("%s  %s %d\n",source,destnation,flag);
    //经测试可知scanf函数的返回值为函数读取参数的个数；
    return 0;
}
