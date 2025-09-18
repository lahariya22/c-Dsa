#include<stdio.h>
int main()
{
	int x= 23;
	short y =2;
	int z = sizeof(x+y);
	// int and short = int 
	printf("%d", z);
	
	return 0;
	
}