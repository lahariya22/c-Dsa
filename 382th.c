// print area and per of tri user defined  no;
#include<stdio.h>
int main()
{
   	 int l,b,h;
     int area;
     int per;
      printf("enter l:");
      scanf("%d",&l);
       printf("enter b:");
      scanf("%d",&b); 
	  printf("enter h:");
      scanf("%d",&h);
    area =l*b*h ;
    per = 2*(l+b)*h;
	printf("area of tri  is :%d\n", area);	
	printf("perimeter of tri is :%d",per);
	return 0;	
}