#include <stdio.h>


int main(void)
{
	int i,j;
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	} ;
	int arrResult[4][3];

	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			arrResult[j][i] = arr[i][j];
		}
	}

	for (i=0; i<4; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%3d",arrResult[i][j]);
		}
		printf("\n");
	}
	return 0;
}