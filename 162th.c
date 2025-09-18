#include<stdio.h>
// gobal var 
int x =34;

int main()
{
	//local var 
	// we can make same name var in global and local 
	// when local and global var has same name fun 1st give priortity to it local var 
	int x =67;
	printf("%d",x);
	
	return 0;
	
}