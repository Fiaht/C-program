#include<stdio.h>
int main()
{
	float a=2,b=3,x=3.5,y=2.5;
	float m;
	m=(float)(a+b)/2+(int)x%(int)y;
	printf("%f\n",m);
	return 0;
}