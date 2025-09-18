#include<stdio.h>
int main()
{
	char x = 34;
	short y  =55;
	int z= sizeof(x+y);
	// char and short is int 
	printf("%d", z);
	
	return 0;
}