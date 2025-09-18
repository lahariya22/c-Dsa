#include<stdio.h>
int main()
{
//	double t = 3.235;
	long double t = 33636.66347L;
	//float t = 3.5f;
	int x = sizeof (t);
	
	printf("size of float var :%d", x);
	
	return 0;
	
}