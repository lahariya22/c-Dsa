#include<stdio.h>
int main()
{
	// conditional if 
	// tea prepare
	char f;
	printf("boil a water\n");
	printf("sugar (y/n) : ");
	scanf("%c",&f);
	if(f=='y'){
		printf("add sugar\n");
	}
	printf("add tea leaves\n");
	printf("add ginger\n");
	printf("add milk\n");
	printf("now again boil it\n");
	printf("tea is ready");
	
	
	return 0;
	
}