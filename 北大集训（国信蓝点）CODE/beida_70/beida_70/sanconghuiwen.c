#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Palindrome(char arr[])
{
	int i;
	int n = strlen(arr);
	for (i=0; i<n/2; i++)
	{
		if (arr[i] != arr[n-i-1])
			return 0;
	}
	return 1;
}

int main(void)
{
	/*判断三重回文数*/
	int i;
	long result;
	char arr[11] = "\0";
	printf("11-1000的三重回文数是：");
	for (i=11; i<1000; i++)
	{
		itoa(i,arr,10);
		if (Palindrome(arr))
		{
			result = i*i;
			itoa(result,arr,10);
			if (Palindrome(arr))
			{
				result = i*i*i;
				itoa(result,arr,10);
				if (Palindrome(arr))
				{
					printf("%d  ",i);
				}
			}
		}
	}
	getch();
	return 0;
}