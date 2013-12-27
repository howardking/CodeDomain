#include <stdio.h>
#include <stdlib.h>

int main()
{/*CÓïÑÔÏ°ÌâÓë½âÎöP25¡¾Àı2-1-10¡¿*/
    int a,b;
    a += a -= (b=4)*(a=3);
    printf("a = %d\n",a);
    return 0;
}
