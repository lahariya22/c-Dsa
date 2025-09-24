#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks(%%): ");
	scanf("%d",&marks);
	if(marks<33)
	{
		printf("fail");	
	}
	else if(marks<45){
		printf("3rd division");
	}
	else if (marks<60)
	{
		printf("2nd division");
	}
	else if(marks<75)
    {
	printf("1st division");
	}else
	{
		printf("distination");
		}	
	
	return 0;
}