#include <stdio.h>
#include <stdlib.h>

int a;

int main()
{
    char alph = 'A';
    char * p_string = "abcdef";
    int a_temp_one = 3;
    int a_temp_two = 1;
    int * p_a = &a_temp_one;
    int temp = 10;
    int b[100];
    float a_float_one = 1.0;
    double  a_double_one = 1.0;


    //register int b = 10;
    printf("The address of a is %x\n",&a);
    printf("The address of b is %d\n",b);
    printf("sizeof a = %d\n",sizeof a);
    printf("sizeof b = %d\n",sizeof b[0]);
    printf("sizeof long = %d\n",sizeof(long));
    printf("sizeof double = %d\n",sizeof (double));
    printf("float a_float_one = %f\n",++a_float_one);
    printf("double a_double_one = %f\n",++a_double_one);
    printf("alph = %c\n",(++alph));
    printf("%d\n",1<<3+2);
    printf("%d\n",(++a_temp_one)+(++a_temp_one)+(++a_temp_one));
    printf("%d\n",(a_temp_one++)+(++a_temp_two));
    printf("sizeof *p_a = %d\n",sizeof(p_a));
    printf("sizeof *p_string = %d\n",sizeof(p_string));
    //#error message ("Thank you")
    printf("\a\n");
    return 0;
}
