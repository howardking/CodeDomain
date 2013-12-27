#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*CÏ°ÌâÓë½â´ð¡¾Àý5-1-11¡¿*/
    char a,b,c,*d;
    a = '\10';
    b = '\xbc';
    c = '\0xab';
    d = "\017";

    printf("%d",printf("%c%c%c\n",a,b,c,*d));
    printf("%c\n",a);
    printf("%c\n",b);
    printf("%c\n",c);
    printf("%c\n",*d);
    return 0;
}
