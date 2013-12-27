#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    /*这个函数用来测试main函数中自带参数的用法*/
    int i,len = 0;
    for (i=0; i<argc; i++){
        printf("%s\n",(argv[i]));
    }
    for (i=1; i<argc; i+=2){
        len += strlen(argv[i]);
    }
    printf("%d\n",argc);
    printf("%d\n",len);
    return 0;
}
