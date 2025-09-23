// print area and per of rec user defined  no;
#include<stdio.h>
int main()
{
   	 int l;
     int b;
     int area;
     int per;
      printf("enter l :");
      scanf("%d",&l);
      printf("enter b :");
      scanf("%d",&b);
    area = l*b;
    per = 2*(l+b);
	printf("area of rec is :%d\n", area);	
	printf("perimeter of rec is :%d",per);
	
	return 0;	
}