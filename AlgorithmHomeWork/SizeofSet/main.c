#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){
	int i=0;
	int j = 1;
	int k = 0;
	int count = 0;	//i������
	int set = 0;
	float result = 0;
	long long int count_true = 0;	//��¼�������������ĸ���
	int x = 0;
	float y = 0;
	int * newfeild = NULL;

	printf("Please input the size of the set:\n");
    scanf("%d",&set);
	srand(time(0));
	printf("+---------------------------------------------------+\n");
     printf("|          ����ļ��ϵĴ�СΪ��%10d           |\n",set);
	printf("|---------------------------------------------------|\n");
	printf("|          ѭ������          |         ���ϵ���Ϊ   |\n");
	printf("|---------------------------------------------------|\n");
    for (j=1; j<argc; j++){
        count_true = 0;
        count = atoi(argv[j]);
        for (i=0; i<count; i++){
            if(NULL==(newfeild=calloc(sizeof(int), set)) ){
                printf("calloc error\n!");
                exit(1);
            }
            for (k=0; k<=set; k++){
                x = (int)rand()%set;
                if(!newfeild[x]){
                    newfeild[x] = 1;
                    count_true++;
                }
                else{
                    break;
                }
            }
            free(newfeild);
		}
		result = (float)count_true/count;
		printf("|%27d|%23d|\n",count,(int)(2*result*result/3.14));
	}
    printf("+---------------------------------------------------+");
	return 0;
}
