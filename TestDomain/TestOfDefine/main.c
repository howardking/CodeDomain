#include <stdio.h>
#include <stdlib.h>
#define  printd(expr) printf(#expr " = %g\n", expr)

int main()
{
    float x = 10.0f;
    float y = 2.0f;
    printd(x/y);
    return 0;
}
