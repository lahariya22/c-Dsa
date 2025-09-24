#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks(%%): ");
	scanf("%d",&marks);
	if(marks>=75)
	{
		printf("distincation");	
	}
	else if(marks>=60){
		printf("1st division");
	}
	else if (marks>=45)
	{
		printf("2nd division");
	}
	else if(marks>=33)
    {
	printf("3rd division");
	}else
	{
		printf("fail");
		}	
	
	return 0;
}