#include <stdio.h>
#include <stdlib.h>

int main()
{
    const  int max = 100;
    const int  *const p = max;
    //volatile*p = 10;//����ʱ���������󣬵��ǳ��������

    printf("max = %d\n",*p);
    return 0;
}
