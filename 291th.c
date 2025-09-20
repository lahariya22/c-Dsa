#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks :");
	scanf("%d", &marks);
	 marks>=75 
	 ? printf("%s","distincation")
	 : marks>=60 
	 ? printf ("%s","frist division")
	 : marks>=45 
	 ?printf("%s","second division")
	 : marks>=33
	 ? printf( "%s","third division")
	 : printf("fail");
	
	return 0;
	
}