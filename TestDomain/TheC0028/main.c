#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*经验证char a[4] = b[4]是不可以的*/
    int second;
    char b[4];
    int first = second = 10;
    char a[4] = b = "abc";
    printf("Hello world!\n");
    return 0;
}
