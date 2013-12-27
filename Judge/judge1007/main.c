#include <stdio.h>
#include <stdlib.h>




int main()
{
    int m;
    int n;
    int i;
    int j;
    int * count = NULL;
    char * arr = NULL;

    scanf("%d%d",&m,&n);
    if(!(arr=(char*)malloc(sizeof(char)*(m+2)*n))){
        exit(1);
    }
    if(!(count=(int*)malloc(sizeof(int)*2*n))){
        exit(1);
    }
    for (i=0; i<n; i++){
            scanf("%s",(arr+i*(m+1)));
    }
    for (i=0; i<n; i++){
            printf("%s\n",(arr+i*(m+1)));
    }
   // printf("Hello world!\n");
    return 0;
}
