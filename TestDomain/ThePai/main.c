#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rand( void );

int main()
{
    int i = 0;
    int k = 0;
    float x;
    float y ;
     srand(time(NULL) );
     for( i = 0; i < 1000000000; i++ ){
        x =  (float)(rand() % 1001) * 0.001f;
        y = x;
        if (fabs(x*x + y*y -1)<0.001){
            k++;
        }
     }
     printf( "pai = %f\n", (float)k/i);
    return 0;
}
