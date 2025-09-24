//gender 
#include<stdio.h>
int main()
{
	int age;
	char gender;
	printf("enter gender :");
	scanf("%c",&gender);
	printf("enter age :");
	scanf("%d",&age);
	if(gender=='f'){
		if(age<=22){
			printf("no min balance only 4%% interset");
			}else if(age<60){
				printf("2000 min balance intrest 8%%");
		}
		else{
			printf("no min balance interst 12%%");
		}
	}
		else {
			if(gender =='m'){
				if(age<=22){
			printf("500 min balance only 2%%interset");
			}else if(age<60){
				printf("5000 min balance intrest 6%%");
		}
		else{
			printf("2000 min balance interst 11%%");
		}	
			}
		}	
	return 0;
}