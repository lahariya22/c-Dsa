#include<stdio.h>
int main()
{
	int price;
	printf("enter book price :");
	scanf("%d",&price);
	printf("%s", price <=200 ? "buy": price <=400 ? "buys later":"don't buy");
	
	
	return 0;
	
}