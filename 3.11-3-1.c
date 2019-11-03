#include<stdio.h>//算数表达式用%f,逻辑表达式用%d
int main()
{
	float a;
	a=3.5+1/2+56%10;
	printf("%f",a);
	return 0;
}