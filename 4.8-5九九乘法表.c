#include<stdio.h>
int main()
{
	int i, j; //i代表横向，j代表竖直方向
	for (j=1;j<=9;j++){
		for (i=1;i<=j;i++){
			printf("%d ",i*j); 
		}
		printf("\n");
	}
	return 0;
}
