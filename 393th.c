// print book if it negtive print invaild output
#include<stdio.h>
int main()
{
	int price;
	printf("enter book price :");
	scanf("%d",&price);
	if (price<0|| price>1000){
		printf("invaild output");
	}
		else{
		if(price<=200){
			printf("buy..");
		}else if(price<=400){
			printf("buy later..");	
		}else {
			printf("don't buy");
}
}
	return 0;	
	
	}