#include <stdio.h>
int main()
{
	double a,b,c,d,e,i,max;
	printf("Input 5 numbers\n");
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	if(a>b){max=a;a=b;b=max;}//先将abc中最大的选出
	if(a>c){max=a;a=c;c=max;}
	if(b>c){max=b;b=c;c=max;}//选出了abc中最大的，并将其质赋给c
	if(d>e){i=d;d=e;e=i;}//c与de再比较选出最大的
	if(c>e){max=c;c=e;e=max;}
	printf("%lf\n",e);
	return 0;
}