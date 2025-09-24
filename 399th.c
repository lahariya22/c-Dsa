//gender 
#include<stdio.h>
int main()
{
	char cbook;
	int age;
	char gender;
	printf("enter gender :");
	scanf("%c",&gender);
	printf("enter age :");
	scanf("%d",&age);
	if(gender=='f'){
		if(age<=22){
			printf("min balance :0 and IN: 4%% \n");
			fflush(stdin);
			printf("if you want cheque book: ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500rs for cheque book");
			}else if(age<60){
				printf("min balance:2000 and IN:8%%\n");
				fflush(stdin);
			printf("if you wnt cheque book : ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500rs for cheque book");
		}
		else{
			printf("min balance:0 and IN :12%%\n");
			fflush(stdin);
			printf("if you wnt cheque book : ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500 rs for check book");	
		}
	}
		else {
			if(gender =='m'){
				if(age<=22){
			printf("min balance::500 and IN:2%%\n");
			fflush(stdin);
			printf("if you wnt cheque book : ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500 rs for check book");
			}else if(age<60){
				printf("min balance: 5000 and IN:6%%\n");
				fflush(stdin);
			printf("if you wnt cheque book : ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500 rs for check book");
		}
		else{
			printf("min balance:2000 and IN :11%%\n");
			fflush(stdin);
			printf("if you wnt cheque book : ");
			scanf("%c",&cbook);
			if(cbook =='y')
			printf(" min balance +500rs for cheque book");
		}	
			}
		}	
	return 0;
}