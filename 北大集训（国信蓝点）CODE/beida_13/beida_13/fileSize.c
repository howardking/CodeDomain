#include <stdio.h>

int main(void)
{
	/*�����ļ��Ĵ�С*/
	int f;
	FILE *fp = fopen("text","r");
	fseek(fp,0,SEEK_END);
	f = ftell(fp);
	fclose(fp);
	printf("�ļ��Ĵ�С�ǣ�%d",f);
	return 0;
}