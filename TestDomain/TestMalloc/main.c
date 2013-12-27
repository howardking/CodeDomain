#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

int main()
{
    int i = 0;
    int j = 0;
    char arry[100];
    char  arr[1000] ;
    char * p_pointer = (char  *)malloc(sizeof (char)*100);
    for (i=-999; i<9999; i++){

        arr[j] = p_pointer[i];
        //printf("%c   ",p_pointer[i]);

        if ('\0'==arr[j]){
           // arr[j] = '\0';
            printf("%s\n",arr);
             j = -1;
        }
        j++;
    }
    printf("===================================================================\n");
     for (i=-9999; i<9999; i++){
        printf("%c",arry[i]);
        //j++;
        if (0 == i%100){
            //arr[j] = '\0';
            printf("\n");
             //j = 0;
        }
    }
   // printf("");
    return 0;
}
