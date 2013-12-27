#include <stdio.h>

int main(void)
{
	/*计算文件的大小*/
	int f;
	FILE *fp = fopen("text","r");
	fseek(fp,0,SEEK_END);
	f = ftell(fp);
	fclose(fp);
	printf("文件的大小是：%d",f);
	return 0;
}