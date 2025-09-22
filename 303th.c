#include<stdio.h>
int add(int x , int y)
{
 return x+y;
}
int main (){
	int a =7;
	int b= a;
	int c = a+b;
	int d = add(a,b);
	printf("%d\n",c);
	printf("%d",d);	
	return 0;
}