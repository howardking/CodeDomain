#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*CÓïÑÔÏ°ÌâÓë½â´ğ¡¾Àı5-2-11¡¿*/
    int a[5] = {10,20,30,40,50};
    int *p = &a[4];
    *--p;
    printf("%d\n",*p);
    return 0;
}
