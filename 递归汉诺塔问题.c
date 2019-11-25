#include <stdio.h>

//输出摆放次数的函数
int times = 0;
void move(char get,char put)
{
	printf(" %c --> %c\n", get, put);   
	times++;    
}

//调用汉诺塔的层数，递归
void hanoi(int n, char A, char B, char C)//A B C三根杆子
{
	if(n == 1) 
		move(A, C);
	else //多个圆盘
	{
		hanoi(n-1, A, C, B);
		move(A, C);
		hanoi(n-1, B, A, C);
	}
}

//输入汉诺塔的层数
int main() 
{
	int n;
	printf("请输入汉诺塔层数：");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	printf("至少需要移动%d次", times);
	return 0;
}