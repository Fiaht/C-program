#include<stdio.h>
#define PI 3.14159
int main()
{
	float r;
	float area;
	printf("input r=");
	scanf("%f",&r);
	area=PI*r*r;
	printf("The area is %f\n",area);
	return (0);
}