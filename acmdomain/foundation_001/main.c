#include <stdio.h>
#include <stdlib.h>

int main()
{/*这个程序用来测试函数sscanf和函数sprintf的简单应用*/
    char buf[1024];
    char a[100] = "I ";
    char b[100] = "love ";
    char c[100] = "ACM.";
    sprintf(buf,"%s%s%s",a,b,c);
    printf("%s\n",buf);
    return 0;
}
