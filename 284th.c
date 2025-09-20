#include<stdio.h>
int main ()
{	// conditional statement 
	int n,m ;
	printf("enter the value of n and m :");
	scanf("%d %d",&n,&m);
	int r = m > n ? m : n;
	printf("%d",r);
	return 0;
}