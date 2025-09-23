// print area and per of square user defined  no;
#include<stdio.h>
int main()
{
   	 int s;
     int area;
     int per;
      printf("enter s :");
      scanf("%d",&s);
    area = s*s;
    per = 4*s;
	printf("area of square  is :%d\n", area);	
	printf("perimeter of square is :%d",per);
	return 0;	
}