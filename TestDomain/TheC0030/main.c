#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    /*���������������main�������Դ��������÷�*/
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
