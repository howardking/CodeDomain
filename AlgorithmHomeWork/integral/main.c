#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float (*fun)(float);      //����ָ�룬ָ����ֺ���

float y_equals_x(float x)
{/*�˴�������y=xΪ����������*/
    return x;
}

float  y_equals_power(float x)
{/*�˴�������y = x*x*x+x*x+xΪ����������*/
    return x*x*x+x*x+x;
}
int main(int argc, char *argv[]){
	int i=0;
	int j = 1;
	int count = 0;	//i������
	int count_true = 0;	//��¼�������������ĸ���
	float abcd[4] = {0};    //�������a,b,c,d
	float x = 0;
	float y = 0;
	float result = 0;

	fun = y_equals_x;

	printf("Please input a and b:\n");
	for (i=0; i<2; i++){                             //����a��b��ֵ
        scanf("%f",&abcd[i]);
        //abcd[i+2] = fun(abcd[i]);           //��c��d��ֵ
	}
	abcd[2] = 0;
	abcd[3] = fun(abcd[1]);                 //����y=f(x)�������ǵ���������
	srand(time(0));
	printf("+---------------------------------------------------+\n");
    printf("|  a=%f, b=%f, c=%f, d=%f   |\n",abcd[0],abcd[1],abcd[2],abcd[3]);
	printf("|---------------------------------------------------|\n");
	printf("|          ѭ������         |       ����ֵΪ        |\n");
	printf("|---------------------------------------------------|\n");
    for (j=1; j<argc; j++){
        count_true = 0;
        count = atoi(argv[j]);
        for (i=0; i<count; i++){
		x = (abcd[1]-abcd[0])*rand()/RAND_MAX+abcd[0];
		y = (abcd[3]-abcd[2])*rand()/RAND_MAX+abcd[2]; //���������y
		result = fun(x);
		if (y<=result){
			count_true++;
		}
		}
		printf("|%27d|%23f|\n",count,(float)count_true/count*(abcd[1]-abcd[0])*(abcd[3]-abcd[2]));
	}
    printf("+---------------------------------------------------+");
	return 0;
}
