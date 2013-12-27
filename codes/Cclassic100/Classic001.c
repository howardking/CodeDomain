/*
Auther: Root Wang
Time: 2012-1-28
Version:1.0*/

#include "stdio.h"

int main(void){
	int i = 0;
	int j = 0;
	int k = 0;

	for (i =0; i<5; i++){
		for (j=0; j<5; j++){
			for (k=0; k<5; k++){
				if (i!=j && i!=k && j!=k){
					printf("%d%d%d\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
