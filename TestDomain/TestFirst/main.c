#include <stdio.h>
#include <stdlib.h>

int main()
{/*此程序用来练习正则表达式的用法程序的结果为：12DDWDFF*/
    const char * s = "iios/12DDWDFF@122";
    char buf[20];

    sscanf(s,"%*[^/]/%[^@]",buf);
    printf("%s\n",buf);
    return 0;
}
