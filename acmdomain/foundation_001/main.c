#include <stdio.h>
#include <stdlib.h>

int main()
{/*��������������Ժ���sscanf�ͺ���sprintf�ļ�Ӧ��*/
    char buf[1024];
    char a[100] = "I ";
    char b[100] = "love ";
    char c[100] = "ACM.";
    sprintf(buf,"%s%s%s",a,b,c);
    printf("%s\n",buf);
    return 0;
}
