#include<stdio.h>
int main()
{
	double pi,f1,f2=1,f3,n;
	for(n=1;n<=1000;n++){
	f1=((2*n)*(2*n))/((2*n-1)*(2*n+1));
	f2=f2*f1;
	}
	f3=2*f2;
	printf("pi=%lf",f3);
	return 0;
}