#include<stdio.h>
// global var 
int x=45;
	

int main()
{
	// fun local var 
//	int x =6;
	// cant print output error 
	
	printf("%d\n",x);
	{
		//local scope var 
	//	int x =67;
		printf("%d",x);
		
	}
	return 0;
}