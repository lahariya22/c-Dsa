#include<stdio.h>
int x =34;

int main()
{
	
	int y =23;
	 printf("%d\n", x);
	 printf("%d ",y);
	return 0;
	// cant acess any var after return 
	printf("%d",y);
    printf("%d", x);
}