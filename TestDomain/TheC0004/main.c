#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char  a[] = "BB\n\\\'\r";
    printf("%d  %d\n",sizeof(a),strlen(a));
    return 0;
}
