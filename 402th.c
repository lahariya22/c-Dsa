#include<stdio.h>
int main()
{
	char chequebook;
	char gender;
	int age;
	printf("enter age :");
	scanf("%d",&age);
	fflush(stdin);
	printf("enter gender :");
	scanf("%c",&gender);
	fflush(stdin);
	
	if(age<=22){
		if(gender =='m'){
			printf("mb:500 and interest : 2%%\n");
			printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			}
			}else{
				printf("mb : 0 and interst: 4%%\n");
				printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			
			}	
			}
			}else if(age>60){
				if(gender =='m'){
					printf("mb :2000 and interest 11%%\n");
					printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			}
			}
			else {
				printf("mb : 0 and interest 12%%\n");
				printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			}
			}
			}else {
				if(gender == 'm'){
					printf("mb : 5000 and interest :6%%\n");
					printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			}
				}
				else
				{
					printf("mb :2000 and interest :8%%\n");
					printf("you wnt chequebook :");
			scanf("%c", &chequebook);
			if (chequebook =='y'){
				printf("min balance +500 for cheque book");
			}
					
				}
				}
	
	return 0;
}