#include "k_close.h"
//#include ""

using namespace std;

int main()
{
    c_k_close close;
	int i = 0;
	int j = 0;
	for(j=0;j<9;j++)
	{
		//a.preprocess(1000+500*j);
    	for(i=1; i<10; i++)
		{
		    close.m_preprocess(1000+500*i);
	       //a.fenlei(i);
	       clsoe.m_classification(j);
		}
	}

}
