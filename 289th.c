#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks :");
	scanf("%d", &marks);
	printf("%s", marks>=75 ? "distincation": marks>=60 ? "frist division": marks>=45 ?"srcond division": marks>=33? "third division": "fail");
	
	return 0;
	
}