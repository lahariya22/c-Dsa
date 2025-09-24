#include<stdio.h>
int main()
{
	char gender;
	int age;
	printf("enter age :");
	scanf("%d",&age);
	fflush(stdin);
	printf("enter gender :");
	scanf("%c",&gender);
	if(age<=22){
		if(gender =='m'){
			printf("mb : 500 and interest : 2%%");
			}else{
				printf("mb : 0 and interst: 4%%");	
			}
			}else if(age>60){
				if(gender =='m'){
					printf("mb :2000 and interest 11%%");
			}
			else {
				printf("mb : 0 and interest 12%%");
			}
			}else {
				if(gender == 'm'){
					printf("mb : 5000 and interest :6%%");
				}
				else
				{
					printf("mb :2000 and interest :8%%");
					
				}
				}
	
	return 0;
}