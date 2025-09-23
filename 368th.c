#include<stdio.h>
int main()
{
	// conditional if -else
	// else if 
	// tea prepare
	int f;
	printf("boil a water\n");
	printf("enter which we add (1/2/3/4): ");
	scanf("%d",&f);
	if(f==1){
		printf("add sugar\n");
	}
	else if (f==2){
		printf("add sugar free\n");
	}
	else if (f ==3){
	printf("add jaggery\n");
	}else if(f ==4){
		printf("add honey");
	}
	else{
		printf("without any type sugar \n");
	}
	printf("add tea leaves\n");
	printf("add ginger\n");
	printf("add milk\n");
	printf("now again boil it\n");
	printf("tea is ready");
	
	
	return 0;
	
}