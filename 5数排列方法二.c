#include <stdio.h>
int main()
{
	double a,b,c,d,e,max;
	printf("Input 5 numbers\n");
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	if(max<d)
		max=d;
	if(max<e)
		max=e;
	printf("%lf\n",max);
	return 0;
}