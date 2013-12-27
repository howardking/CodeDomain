#include <stdio.h>
#include <string.h>

int HuiWenZi(char arr[])
{
	int i;
	int n = strlen(arr);
	int m = (n-1)/2;
	int flag = 1;
	for(i=0; i<m; i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			flag = 0;
		}
	}
	if (1==flag)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main(void)
{
	/*判断回文字*/
	int flag;
	char arrayA[100] = "0";
	scanf("%s",arrayA);
	flag = HuiWenZi(arrayA);
	if (1 == flag)
	{
		printf("%s是回文数\n",arrayA);
	}
	else 
	{
		printf("%s不是回文数\n",arrayA);
	}
	getch();
	return 0;
}