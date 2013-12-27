#include <stdio.h>
#include <stdlib.h>

#define IFABC(a,b,c) c=a>b?a:b

int main(void)
{
    /*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı8-1-8¡¿*/
    int x ;
    int m = 5;
    int n = 1;

    x = IFABC(m+n,m,x);
    printf("%d\n",x);

    return 0;
}
