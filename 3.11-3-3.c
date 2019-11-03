#include<stdio.h>
int main()
{
	float x=2.5,a=7,y=4.7;
	float m;
	m=x+7%3*(int)(x+y)%2/4;
	printf("%f\n",m);
	return 0;
}