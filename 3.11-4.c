#include<stdio.h>
int main()
{
	float a=3,b=4,c=5,x,y;
	printf("%d\n",+b>c&&b==c);
	printf("%d\n",!(a>b)&&!c||1);
	printf("%d\n",!(x=a)&&(y=b)&&0);
	printf("%d\n",!(a+b)+c-1&&b+c/2);
	return 0;
}