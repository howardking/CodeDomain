#include <stdio.h>
#include <stdlib.h>

int main()
{/*�˳���������ϰ������ʽ���÷�����Ľ��Ϊ��12DDWDFF*/
    const char * s = "iios/12DDWDFF@122";
    char buf[20];

    sscanf(s,"%*[^/]/%[^@]",buf);
    printf("%s\n",buf);
    return 0;
}
