#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*用来查看函数strcat的返回值*/
    //int i = 0;
    int flag = 0;
    char source[10] = "hello";
    char destnation[20] = "abc";
    printf("在调用strcat函数之前：\n");
    printf("%s    %d\n",source,flag);
    flag = strcat(destnation,source);
    printf("在调用strcat函数之后：\n");
    printf("%s   %d\n",destnation,flag);
    printf("The address of destnation is %d\n",destnation);
    printf("%s\n",flag);//经测试可知strcat函数的返回值为目的字符串的地址；
    return 0;
}
