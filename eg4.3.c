#include<stdio.h>
int main()
{
	float a,b,x,y;
	scanf("%f %f",&a,&b);
	if(a>b){
		x=b;
		y=a;
		printf("%f %f",x,y);
	}
	else{
		x=a;
		y=b;
		printf("%f %f",x,y);
	}
	return 0;
}