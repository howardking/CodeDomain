#include<iostream>
using namespace std;

int main(){
	int i;
	int j;
	int m;
	int n;
	int num;
	int flag;
	int num1[10][10],num2[10][10],result[10][10];

	while(cin>>m){
		if(m==0)
			break;
		cin>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>num1[i][j];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>num2[i][j];
		num=0;
		for(i=0;i<m;i++){
			flag=0;
			for(j=0;j<n;j++)
				if(num1[i][j]+num2[i][j]){
					flag=1;
					break;
				}
			if(flag==0)
				num++;
		}

		for(i=0;i<n;i++){
			flag=0;
			for(j=0;j<m;j++)
				if(num1[j][i]+num2[j][i])
				{
					flag=1;
					break;
				}
			if(flag==0)
				num++;
		}
		cout<<num<<endl;
	}
}
