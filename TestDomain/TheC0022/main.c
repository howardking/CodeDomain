#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*C����ϰ�����������4-2-6��*/
    char s[] = "\\141\141abc\t";
    printf("%d\n",strlen(s));
    printf("%d\n",sizeof(s));
    printf("%c\n",'\141');
    return 0;
}
