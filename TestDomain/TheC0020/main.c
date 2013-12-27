#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /*用来查看函数strupr的返回值*/
    int flag = 0;
    char source[10] = "low";
    char destnation[10];
    printf("在调用strupr函数之前：\n");
    printf("%s    %d\n",source,flag);
    flag = strupr(source);
    printf("在调用strupr函数之后：\n");
    printf("%s    %d\n",source,flag);
    printf("%s\n",flag);
    //经测试可知strupr函数的返回值为函数转换后的字符串的地址；
    return 0;
}
