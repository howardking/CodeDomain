#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//#define eps 1e-8
//   ʹ��RAND_MAX
int main(int argc, char *argv[]){
	int i=0;
	int j = 1;
	int count = 0;	//i������
	int count_true = 0;	//��¼�������������ĸ���
	float x;
	float y;
	float sum;
	//printf("Please input a count number:\n");
	//scanf("%d",&count);
	srand(time(0));
	printf("+---------------------------------------------------+\n");
	printf("|          ѭ������         |       �е�ֵΪ        |\n");
    printf("+---------------------------------------------------+\n");
    for (j=1; j<argc; j++){
        count_true = 0;
        count = atoi(argv[j]);
        for (i=0; i<count; i++){
		x = (float)rand()/RAND_MAX;
		y = (float)rand()/RAND_MAX;
		//y = (float)rand()/RAND_MAX;
		sum = 1.0f - x*x ;
		if (y<=sqrt(sum)){
			count_true++;
		}
		}
		printf("|%27d|%23f|\n",count,4*(float)count_true/count);
	}
    printf("+---------------------------------------------------+");
	return 0;
}
