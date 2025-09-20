#include<stdio.h>
int main()
{
 int price ;
 printf("enter the book :");
 scanf("%d",&price);
 printf("%s", price<=200? "buy": "don't buy");
	return 0;
}