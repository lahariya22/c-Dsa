#include<stdio.h>
int main()
{
	int x = sizeof(8.3f +'a'+34+5.6 +5.2L+'3');// long double 16
//	int x = sizeof(7.8f + 'a'+ 34 + 1.2);// double 8 

//	int x = sizeof(7.8f + 'a'+ 34 ); // float 4 
	// in sizeof many data type present in that case bade datatype ki value ayegi 
	// in this example 1.2 is double which size is 8 bits 
	//output 8;
	
	printf("%d", x);
		return 0;
	
}