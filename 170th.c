#include<stdio.h>
//global var 
int x =56;

int main()
{
	//local var fun 
	int y=5655;
	{
		// local scope var 
		int z =5;
		
		printf("%d\n",x);
		printf("%d\n",y);
		printf("%d",z);
	}
	
	
	return 0;
	
}