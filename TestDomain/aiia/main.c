#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int arr[10] ;
    for (i=0; i<10; i++){
        arr[i] = i;
        printf("arr[%d] = %d\n",i,i[arr]);
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
    printf("Hello world!\n");
    return 0;
}
