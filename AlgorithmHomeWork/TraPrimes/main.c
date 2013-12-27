#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){
    /*此函数为传统方法计算一定范围内的素数的个数
    但是本例中我们可以从控制台输入其数值的范围
    题目要求为10000之内的所有素数*/
    if (3!=argc){
        printf("请输入要求素数的范围\n");
        exit(1);
    }
    int i = 0;
    int j = 0;
    int flag = 1;
    int begin = atoi(argv[1]);
    int count = atoi(argv[2]);
    int count_true = 0;
    int count_total = 0;

    if (begin>count){
        printf("输入的数据范围有误\n");
        exit(1);
    }

    if (1==begin){
       i = begin + 1;
    }

    for (i; i<=10000; i++){
        flag = 1;
        count_total =(int) sqrt(i);
        for (j=2; j<=count_total; j++){
            if (0==(i%j)){
                flag = 0;
                break;
            }
        }
        if (1==flag){
            count_true++;
            printf("%d,",i);
        }
    }
    printf("\b\n");
    printf("+---------------------------------------------------+\n");
	printf("|          数值范围为：%16d~%d       |\n",begin,count);
	printf("|---------------------------------------------------|\n");
	printf("|          素数个数为：%22d       |\n",count_true);
    printf("+---------------------------------------------------+");
	return 0;
}
