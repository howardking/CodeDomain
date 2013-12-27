#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*C语言习题与解答*/
    char *p1 = "abc";
    char *p2 = "ABC";
    char str[50] = "xyz";

    strcat(p1,p2);//语句中有错误，但并非语法错误
    strcpy(str+2,strcat(p1,p2));

    printf("%s\n",str);
    return 0;
}
