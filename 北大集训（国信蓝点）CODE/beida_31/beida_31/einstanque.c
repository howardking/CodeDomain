#include <stdio.h>

int main(void)
{
	/*����˹̹���ٶ��ٸ����ݵ�����*/
	int i;
	for (i=7;;i+=7)
	{
		if(1==i%2 && 2==i%3 && 4==i%5 && 5==i%6)
		{
			printf("̨���������ǣ�%d\n",i);
			break;
		}
	}
	getch();
	return 0;
}