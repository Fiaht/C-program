#include <stdio.h>

#define MAX 29//书名、作者和出版社的名字不超2953
#define N 5//5本图书信息

//图书相关信息的结构体
struct book 
{
	int isbn;			//书号
	char name[MAX];		//书名
	char author[MAX];	//作者
	char press[MAX];	//出版社
	double price;		//价格
};

//输入5本图书信息并计算5本图书的平均价格
int main()
{
	int i;
	double sum = 0;
	struct book bk[N];//定义一个5个元素的结构数组，bk[N]控制循环次数
	//录入图书信息
	for (i = 0; i < N; i++) 
	{
		printf("THE %d BOOK'S ISBN: ", i+1);
			scanf("%d", &bk[i].isbn);
		printf("NAME: ");
			scanf("%s", bk[i].name);
		printf("AUTHOR: ");
			scanf("%s", bk[i].author);
		printf("PRESS: ");
			scanf("%s", bk[i].press);
		printf("PRICE: ");
			scanf("%lf", &bk[i].price);
	}
	for (i = 0; i < N; i++) 
		sum += bk[i].price;
	printf("AVERAGE price OF THESE BOOKS IS: %lf\n", sum/N);
	return 0;
}