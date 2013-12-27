#include <stdio.h>
#include <stdlib.h>

void test(int a, int b, int c)
{
    int d = 0;
    printf("The address of test is : %p\n", test);
    printf("The address of d is : %p\n", &d);
    printf("The address of a is : %p\n", &a);
    printf("The address of b is : %p\n", &b);
    printf("The address of c is : %p\n", &c);
}

int main(void)
{
    int a = 10;
    int b = 10;
    int c = 10;
    unsigned int i = 0;
    //printf("The address of main is : %p\n", main);
    printf("The address of a is : %p\n", &a);
    printf("The address of b is : %p\n", &b);
    printf("The address of c is : %p\n", &c);
    for ( i=0x0028FF10; i>=0x0028FF00; i--)
    {
        printf("%c\t", * (char *)(i));
    }
    printf("\n");
    test(a,b,c);
    return 0;
}
