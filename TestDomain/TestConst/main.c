#include <stdio.h>
#include <stdlib.h>

int main()
{
    const  int max = 100;
    const int  *const p = max;
    //volatile*p = 10;//编译时看不出错误，但是程序会跑死

    printf("max = %d\n",*p);
    return 0;
}
