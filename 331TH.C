#include<stdio.h>
int main()
{
	 int x;
	 x = printf("abc")>printf("de")&& printf("fgh")>printf("ij");
	 
	 printf("%d",x);
	 // abcdefghij1
	return 0;
	// ctrl +/->comment

}