#ifndef A
#define A
#include <stdio.h>
#include <stdlib.h>
#endif

int main()
{
    int _a[5] = {1,2,3,4,5};
    int *ptr1 = (int*)(&_a+1);
    int *ptr2 = (int*)((int)_a+1);

    printf("%x,%x\n",ptr1[-1],*ptr2);
    //��һ���������_a[4]=5,�ڶ����������2000000

    return 0;
}
