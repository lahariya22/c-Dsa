#include<stdio.h>
int main()
{
	int x=2 , y =3 ,z;
	z = ++x + y++;
	printf("%d %d %d",x,y,z );
	// 3 4 6
	return 0;
	
}