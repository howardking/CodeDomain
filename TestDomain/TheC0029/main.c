#include <stdio.h>
#include <stdlib.h>

void fun(int n);
void fun(int n);

int main(void)
{
    /*�˳�������֤���������ظ�����*/
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
//������������ں��������������ظ����
