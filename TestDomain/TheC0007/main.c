#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 6;
    int j = 0;

    j = (++i)+(i++);
    printf("%d\n",j);
    return 0;
}
