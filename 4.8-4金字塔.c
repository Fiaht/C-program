//方法一：全用printf
//方法二；用for循环
#include <stdio.h>
int main()
{
	int i,n,x,y;
	for(i=1;i<=6;i++){//i是竖直的列 
		n=2*i-1;//n是每一行输出的*数量
		for(x=6;x>i;x--){//x是每一行输出的空格
			printf(" ");
		}
		for(y=1;y<=n;y++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

