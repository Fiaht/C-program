#include<stdio.h>//考虑a==b==0时，无解或无穷多解情况
#include<math.h>
int main()
{
	double a,b,c,d,d1,x1,x2,x;
	printf("Input 3 coefficient\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a!=0){
	d=(b*b)-(4*a*c);
	d1=sqrt(d);
	if(d>0){
		x1=(-b+d1)/(2*a);
		x2=(-b-d1)/(2*a);
		printf("Two solutions\nx1=%.3lf x2=%.3lf",x1,x2);
	}
	if(d<0){printf("No solution");}
	if(d==0){
		x=(-b)/(2*a);
		printf("One solution\nx=%.3lf",x);
		}
	}
	else {
		x=(-c)/b;
		printf("One solution or no solution\nx=%.3lf",x);
	}
	return 0;
}