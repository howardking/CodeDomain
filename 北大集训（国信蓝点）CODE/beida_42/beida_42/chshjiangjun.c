#include <stdio.h>

void Face(void)
{
	printf("*********************************************\n\n");
	printf("**********��ս��ʤ�ң�����������*************\n\n");
	printf("*********************************************\n\n");
	printf("��Ϸ��ʼ:��n\n");

}

void Winner (void)
{
	int people;
	int computer;
	int spare = 20;
	Face();
	while (1)
	{
		printf("���ڻ��� %d �����\n",spare+1);
		printf("�㣺");
		scanf("%d",&people);
		if(people>4 || people<1 || people>spare)
		{
			printf("������Ļ���������⣬����������!\n");
			continue;
		}
		if (spare == people)
		{
			printf("��ϲ����Ӯ�ˣ���\n");
			break;
		}
		computer = 5 - people;
		spare = spare - 5;
		printf("���ԣ�%d\n",computer);
		if (0== spare)
		{
			printf("����%d����������ˣ�����Ӯ�ˣ�\n",spare+1);
			break;
		}

	}

	
}

int main(void)
{
	/*��21���������ȡ��ÿ��ֻ��ȡ1-4����񣬲��ɶ�ȡ����ȡ������Ϊ��ʤ����*/
	Winner();
	getch();
	return 0;
}