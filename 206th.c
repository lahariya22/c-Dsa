#include<stdio.h>
int main()
{
	// college name not print 
char name[20];
char college[20];
int marks;
int age;
printf("enter the name :");
scanf("%[A-za-z ]", &name);
printf("enter the name of college  :");
scanf("%[A-Za-z ]", &college);
printf("enter the marks:");
scanf("%d", &marks);
printf("enter the age :");
scanf("%d", &age);
printf("name is %s\n college name is %s\n marks is %d\n age is %d\n", name , college , marks , age);
	
	return 0;
}