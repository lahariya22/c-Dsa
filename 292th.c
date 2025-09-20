#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks :");
	scanf("%d", &marks);
	 marks>=75 
	 ? printf("distincation")
	 : marks>=60 
	 ? printf ("first division")
	 : marks>=45 
	 ?printf("second division")
	 : marks>=33
	 ? printf( "third division")
	 : printf("fail");
	
	return 0;
	
}