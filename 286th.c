#include<stdio.h>
int main()
{
	int n ,m;
	printf("enter n and m :");
	scanf("%d%d",&n, &m);
	printf("%s" , m>n ? " m is greater n": " n is greater");

	return 0;
}