#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){
    /*�˺���Ϊ��ͳ��������һ����Χ�ڵ������ĸ���
    ���Ǳ��������ǿ��Դӿ���̨��������ֵ�ķ�Χ
    ��ĿҪ��Ϊ10000֮�ڵ���������*/
    if (3!=argc){
        printf("������Ҫ�������ķ�Χ\n");
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
        printf("��������ݷ�Χ����\n");
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
	printf("|          ��ֵ��ΧΪ��%16d~%d       |\n",begin,count);
	printf("|---------------------------------------------------|\n");
	printf("|          ��������Ϊ��%22d       |\n",count_true);
    printf("+---------------------------------------------------+");
	return 0;
}
