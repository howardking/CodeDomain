#include <stdio.h>

void HalfSearch(int a[], int m, int key)
{
	int i;
	int j;
	i = 0;
	while (1)
	{
		j = (m+i)/2;
		if (a[j] == key)
		{
			printf("%3dÔÚ%3dÎ»ÖÃÉÏ¡£\n",key,j+1);
			break;
		}
		if (a[j] > key)
		{
			m = j-1;
		}
		else 
		{
			i = j+1;
		}
	}
}

int main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	HalfSearch(arr,10,2);
	getch();
	return 0;
}