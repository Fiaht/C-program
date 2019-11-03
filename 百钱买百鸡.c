#include<stdio.h>
int main()
{
	int x,y,z,k=0;
	for(x=0;x<=20;x++)//公鸡一只五元
	for(y=0;y<=33;y++){//母鸡一只三元
	z=100-x-y;
	if((5*x+3*y+z/3==100)&&(z%3==0))
	printf("公鸡数:%d 母鸡数:%d 小鸡数:%d\n",x,y,z);
	}
	return 0;
}
