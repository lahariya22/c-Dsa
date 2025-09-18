#include<stdio.h>


// global var i
int y =34;
printf("%d",y);// error 


int main()
{
	int x =56;
	// local var 
	printf("%d\n",x);
	printf("%d",y);
	return 0;
	
}