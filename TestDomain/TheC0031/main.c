#include <stdio.h>
#include <stdlib.h>

union myun
{
    struct
    {
        int x,y,z;
    }u;
    int k;
}a;

int main(void)
{
    /*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı7-6-3¡¿*/
    a.u.x = 4;
    a.u.y = 5;
    a.u.z = 6;
    a.k = 0;
    printf("%d\n",a.u.x);
    printf("%d\n",a.u.y);
    printf("%d\n",a.u.z);
    return 0;
}
