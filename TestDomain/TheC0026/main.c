#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*C����ϰ������*/
    char *p1 = "abc";
    char *p2 = "ABC";
    char str[50] = "xyz";

    strcat(p1,p2);//������д��󣬵������﷨����
    strcpy(str+2,strcat(p1,p2));

    printf("%s\n",str);
    return 0;
}
