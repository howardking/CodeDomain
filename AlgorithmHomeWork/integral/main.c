#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float (*fun)(float);      //函数指针，指向积分函数

float y_equals_x(float x)
{/*此处我们以y=x为例进行试验*/
    return x;
}

float  y_equals_power(float x)
{/*此处我们以y = x*x*x+x*x+x为例进行试验*/
    return x*x*x+x*x+x;
}
int main(int argc, char *argv[]){
	int i=0;
	int j = 1;
	int count = 0;	//i计数用
	int count_true = 0;	//记录符合条件的数的个数
	float abcd[4] = {0};    //用来存放a,b,c,d
	float x = 0;
	float y = 0;
	float result = 0;

	fun = y_equals_x;

	printf("Please input a and b:\n");
	for (i=0; i<2; i++){                             //输入a，b的值
        scanf("%f",&abcd[i]);
        //abcd[i+2] = fun(abcd[i]);           //给c，d赋值
	}
	abcd[2] = 0;
	abcd[3] = fun(abcd[1]);                 //假设y=f(x)的曲线是单调递增的
	srand(time(0));
	printf("+---------------------------------------------------+\n");
    printf("|  a=%f, b=%f, c=%f, d=%f   |\n",abcd[0],abcd[1],abcd[2],abcd[3]);
	printf("|---------------------------------------------------|\n");
	printf("|          循环次数         |       积分值为        |\n");
	printf("|---------------------------------------------------|\n");
    for (j=1; j<argc; j++){
        count_true = 0;
        count = atoi(argv[j]);
        for (i=0; i<count; i++){
		x = (abcd[1]-abcd[0])*rand()/RAND_MAX+abcd[0];
		y = (abcd[3]-abcd[2])*rand()/RAND_MAX+abcd[2]; //产生随机数y
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
