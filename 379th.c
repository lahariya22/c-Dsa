// print area  and circumference of circle  user defined  no;
#include<stdio.h>
int main()
{
   	int r;
     float cir;
     float circum;
     printf("enter r :");
     scanf("%d",&r);
     circum = 2*3.14*r;
    cir = r*3.14*r;
	printf("area of circle is :%.2f\n", cir);	
	printf("circumfeence of circle is :%.2f",circum);
	
	return 0;	
}