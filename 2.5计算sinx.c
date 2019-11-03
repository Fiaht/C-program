#include<stdio.h>
#include<math.h>
#define EPS 1e-7 //定义符号常量表示误差
int main()
{
	double udf_sin(double x);
	double a;
	scanf("%lf",&a);
	printf("%f\n",udf_sin(a));
	printf("%f\n",sin(a));
}
double udf_sin(double x){
	double sum,term,n=1;
	sum=term=x;
	while(fabs(term)>EPS){
		n=n+1;
		term=term*(-x*x)/((2*n-2)*(2*n-1));
		sum=sum+term;
	}
	return (sum);
	}