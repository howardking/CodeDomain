#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*用来查看函数strlen的返回值*/
    int flag = 0;
    char source[10] = {'b'};
   // char stard[10] = "root";
    char test[10] = {'a','a','a','a','a','a','a','a','a','a'};
    printf("%d\n",strlen(source));
    //printf("%d\n",strlen(stard));
    printf("%d\n",strlen(test));
    printf("%s\n",source);
   // printf("%s\n",stard);
    printf("%s\n",test);
    //经测试可知strlen函数的参数值不是‘\0’结尾时，系统会一直计算，直到遇到‘\0’才结束；
    return 0;
}
