#include <stdio.h>
#include <stdlib.h>

#define IN 1        /*�ڵ�����*/
#define OUT 0    /*�ڵ�����*/

int main()
{
    int c, nl, nw, nc, state;

    state  = OUT;
    nl = nw = nc = 0;
    while((c=getchar())!=EOF){
        ++nc;
        if ('\n'==c)
            ++nl;
        if (' '==c || '\n'==c || '\t'== c){
            state = OUT;
        }
        else if (OUT == state){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d!\n",nl, nw, nc);
    return 0;
}
