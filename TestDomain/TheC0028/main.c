#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*����֤char a[4] = b[4]�ǲ����Ե�*/
    int second;
    char b[4];
    int first = second = 10;
    char a[4] = b = "abc";
    printf("Hello world!\n");
    return 0;
}
