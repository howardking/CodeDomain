#include <stdio.h>
#include <stdlib.h>

#define IFABC(a,b,c) c=a>b?a:b

int main(void)
{
    /*C����ϰ�����������8-1-8��*/
    int x ;
    int m = 5;
    int n = 1;

    x = IFABC(m+n,m,x);
    printf("%d\n",x);

    return 0;
}
