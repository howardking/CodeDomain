#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    switch(i)
    {
        case 0:
            printf("0\n");
            break;
        case 1:
            printf("1\n");
            break;
        default:
            printf("default\n");
            break;
    }
    printf("Hello world!\n");
    return 0;
}
