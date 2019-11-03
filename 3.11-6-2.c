#include<stdio.h>
int main()
{
	double r,r1,r2;
	scanf("%lf%lf",&r1,&r2);
	r=1/((1/r1)+(1/r2));
	printf("%.3f",r);
	return 0;
}