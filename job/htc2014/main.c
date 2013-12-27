#include <stdio.h>
#include <stdlib.h>
#define Z 3+2

void f17()
{
    unsigned int a = 5;
    int b = -20;
    printf("a+b");
    (a+b>5)?printf(">5"):printf("<5");
    printf("\n%x\n",a+b);
}

void f14ex()
{
    int i = 0;
    for (i = 0; i< 100; i++){
        printf("%d, ", ~i);
    }
}

void f14()
{
    int a = 90;
    int b = 100;
    const  int b_a = b + ~a;
    printf("%d\n",b_a);
    printf("%d\n",~a);

}

int funcA(int x)
{
    int countN = 0;
    while (x){
        countN ++;
        x = x&(x-1);
    }
    return countN;
}

void f10()
{
    int a = 200;
    printf("%d\n",funcA(a));
}

void  f9()
{
    int a = 10;
    int b = 10;
    int c = 2;
    c *= a+b;
    printf("%d\n", c);
}

int main()
{
    int xx = 6;
    int aa[5] = {1, 2, 3, 4, 5};
    int a = 0x0101;
    int b = 0x0202;
    int c;
    int *p = (int *)(&aa+1);
    c = a&(~b);
    c = c|b;
    char s[10] = "abcd";
    char * B = "154546748764";
    xx += (xx++);
    printf("%d\n", xx);
    xx = 6;
    xx += (++xx);
    printf("%d\n", xx);
    xx = 6;
 //   (xx++) += xx;
   // printf("%d\n", xx);
    //printf("%d\n", xx);
    printf("%d\n", sizeof(B));
    printf("%d\n", sizeof(s));
    printf("%x, %d\n", c,c);
    printf("%d\n", Z*Z*Z);
    printf("%d,%d\n", *(aa+1), *(p-1));
    f9();
    f10();
    f14();
    //f14ex();
    f17();
    return 0;
}
