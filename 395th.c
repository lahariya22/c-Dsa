// print mark if it negtive print invaild outputand greater than 100 than also invailad
#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks (%%):");
	scanf("%d", &marks);
	if(marks>=0&&marks<=100){
		if(marks<33){
			printf("fail");	
		}
		else if(marks<45){
			printf("3rd divsion");
		}
		else if(marks<60){
			printf("2nd division");
       	}else if(marks<75){
       		printf("1st divsion");
		   }
		   else{
		   	printf("distsion");
		   }
	}
		   else{
		   	printf("invaild input");
		   }
	
	return 0;	
	}