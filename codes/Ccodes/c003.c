/*Description:Now let us test more than one functions
Time:2012-1-13
Auther:Root Wang
Version:1.0
*/
#include "stdio.h"

int main(void){
	void function_one(void);//the statement of function_one
	void function_two(int n);//the statement of function_two

	printf("This is first function-main\n");
	function_one();
	function_two(100);
	return 0;
}

void function_one(void){
	printf("Now the program is running function_one.\n");
}

void function_two(int n){
	//This program is used to calculate '1+2+3+...+n'
	int temp=0;
	for (int i=0; i<=n; i++){
		temp += i;
	}
	printf("1+2+3+...+n=%d\n",temp);
}
