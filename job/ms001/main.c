#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    i += i>0?i++:i--;
    printf("%d\n",i);
    return 0;
}
