#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı5-3-2¡¿*/
    char *s[] = {"one","two","three"};
    char *p;
    p = s;
    printf("%s,%s\n",(p+1),s[0]);
    return 0;
}
