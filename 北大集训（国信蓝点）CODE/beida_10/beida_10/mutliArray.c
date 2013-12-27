#include <stdio.h>

int main(void)
{
	int i,j,k;
	int arrOne[2][3] = {
						{1,2,3},
						{4,5,6}
					   };
	int arrTwo[3][4] = {
						{1,0,2,3},
						{4,1,5,6},
						{6,8,9,10}
						};
	int arrResult[2][4] ={
						{0,0,0,0},
						{0,0,0,0}
						};
	for (i=0; i<2; i++)
		for (j=0; j<4;j++)
			for (k=0; k<3; k++)
			{
				arrResult[i][j] += arrOne[i][k]*arrTwo[k][j];
			}

	for (i=0; i<2; i++)
	{
		for (j=0; j<4;j++)
		{
			printf("%5d",arrResult[i][j]);
		}
		printf("\n");
	}
		
	return 0;		

}