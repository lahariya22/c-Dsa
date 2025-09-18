#include<stdio.h>
int main()
{
	char x='a';
	int y = 34;
	int z= sizeof(x+y);
	// char and int = int 
	printf("%d", z);
	
	
return 0;
}