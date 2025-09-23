#include<stdio.h>
int main()
{
	// conditional if -else
	// else if 
	// book buy
	int p;
	printf("give me sci book\n");
	printf("enter the book price (p): ");
	scanf("%d",&p);
	if(p<=200){
		printf("buy a book\n");
	} else if (p<=400){
	printf("buy later");
	}
	else{
		printf("dont buy a book");
	}
	return 0;	
}