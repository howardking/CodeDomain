#include <stdio.h>


void FindAnDian(void)
{
	/*�ú��������ҳ�5*5�����еİ���*/
	int i;
	int j;
	int _i;
	int _j;
	int max;
	int flag;
	int arr[5][5];
	printf("������5*5����\n");
	for (i=0; i<5; i++)
		for(j=0; j<5; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	printf("�������5*5����\n");
	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<5; i++)
	{
		max = arr[i][0];
		_i = i;
		_j = 0;
		for(j=1; j<5; j++)
		{
			if (max<=arr[i][j])
			{
				max = arr[i][j];
				_i = i;
				_j = j;
			}
		}
		for(j=0; j<5; j++)
		{
			if (max>arr[j][_j])
			{
				break;
			}
		}

		if (5 == j)
		{
			printf("�����ǣ�(%d,%d)ֵΪ%d\n",_i,_j,arr[_i][_j]);
		}
	}
}

int main(void)
{
	FindAnDian();
	getch();
	return 0;
}