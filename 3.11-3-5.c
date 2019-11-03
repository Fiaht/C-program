#include<stdio.h>
int main()
{
	float x=3,y=4;
	x=(x=++y,x+5,x/5);
	printf("x=%f",x);
	return 0;
}