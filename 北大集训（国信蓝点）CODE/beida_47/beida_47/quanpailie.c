#include <stdio.h>

void PerSort(void)
{
	int i;
	int j;
	int k;
	int arr[3] = {1,3,5};
	printf ("ÅÅÁĞÎª£º\n");
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			for (k=0; k<3; k++)
			{
				if (i!=j && i!= k && j!=k)
				{
					printf ("%3d%3d%3d\n",arr[i],arr[j],arr[k]);
				}
			}
}

int main(void)
{
	PerSort();
	getch();
	return 0;
}