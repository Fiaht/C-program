#include<stdio.h>
#include<math.h>
#define EPS 1e-7
int main()
{
	int sign;
	double pi,n,temp;
	n=1.0;
	temp=1.0;
	sign=1;
	pi=0;
	while(fabs(temp)>=EPS){
		pi=pi+temp;
		n=n+2;
		sign=-sign;
		temp=sign/n;
	}
	pi=pi*4;
	printf("PI=%f\n",pi);
	return 0;
}