#include <stdio.h>
#include <stdlib.h>

int main()
{
    int la = 0x01000000;
    int lb;
    char  * lp = (char*)&la;
    printf("&lp[0]=%p=%x\n",&lp[0],lp[0]);
    printf("&lp[1]=%p=%x\n",&lp[1],lp[1]);
    printf("&lp[2]=%p=%x\n",&lp[2],lp[2]);
    printf("&lp[3]=%p=%x\n",&lp[3],lp[3]);
    printf("&la=%p\n",&la);
    printf("&lb=%p\n",&lb);

    return 0;
}
