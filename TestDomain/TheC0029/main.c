#include <stdio.h>
#include <stdlib.h>

void fun(int n);
void fun(int n);

int main(void)
{
    /*此程序来验证函数有无重复声明*/
    void fun(int n);

    int i = 2;

    printf("%x\n",&i);
    fun(i);
    return 0;
}

void fun(int n)
{
    printf("%d\n",n);
    printf("%x\n",&n);
}
//结论是这个关于函数的声明可以重复多次
