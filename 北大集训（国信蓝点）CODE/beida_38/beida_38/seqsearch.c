#include <stdio.h>

typedef struct {
	int id;
	char name[20];
	float score;
}ElemType;

void Search(ElemType *a, int key,int n)
{
	int i;
	for (i=0; i<4; i++)
	{
		if(a[i].id == key)
		{
			printf("ѧ��ѧ�ţ�%d\n",a[i].id);
			printf("ѧ��������%s\n",a[i].name);
			printf("ѧ���ɼ���%2.2f\n",a[i].score);
		}
	}
}

int main(void)
{
	ElemType arr[4] = {
						{1001,"Tom",98},
						{1002,"Jeff",96},
						{1003,"Huang",97},
						{1004,"Wang",99}				
					  };
	Search(arr,1004,4);
	getch();
	return 0;
}