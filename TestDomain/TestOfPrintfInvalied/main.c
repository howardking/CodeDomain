#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p_char = "hello world\n";
    while(NULL != p_char ){
        printf("%c",*p_char);
        p_char++;
    }
    return 0;
}
