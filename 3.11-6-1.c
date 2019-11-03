#include<stdio.h>
#include<math.h>
int main()
{
	const double pi = acos(-1.0);
	double r,v;
	scanf("%lf",&r);
	if(r<0) printf("no solution");
	else {
	v=(4/3)*pi*r*r*r;
	printf("v=%.3lf\n",v);
	}
	return 0;
	
}