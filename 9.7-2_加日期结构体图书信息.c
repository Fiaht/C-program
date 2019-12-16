#include <stdio.h>

#define MAX 29			//字符数量不超过29
#define N 5				//五本图书信息

struct date				//日期结构体
{
	int  year, month, day;
};
struct book
{
	char isbn[MAX];			//书号
	char name[MAX];			//书名
	char author[MAX];		//作者
	char press[MAX];		//出版社
	double price;			//价格
	struct date date;		//嵌套出版日期
}b[N];

//read print函数声明
void read(struct book *p);
void print(struct book *p);

//主函数调用read函数和print函数
int main()
{
	struct book;
	int i;
	for(i = 0; i < N; i++)
	{
		printf("PLEASE INPUT THE %d BOOK'S ISBN: ", i + 1);
		read(b + i);
	}
	for(i = 0; i < N; i++)
		print(b + i);
	return 0;
}
	
//read函数录入图书信息
void read(struct book *p)
{
	gets(p -> isbn);
	printf("THE BOOK'S NAME: ");
	gets(p -> name);
	printf("THE BOOK'S AUTHOR: ");
	gets(p -> author);
	printf("THE BOOK'S PRESS: ");
	gets(p -> press);
	printf("THE BOOK'S PRICE: ");
	scanf("%lf", &p -> price);
	printf("THE BOOK'S DATE: ");
	scanf("%d %d %d",
	&p -> date.year,
	&p -> date.month,
	&p -> date.day);
	getchar();
}

//输出图书信息print函数
void print(struct book *p)
{
	int i;
	for(i = 0; i < 100; i++)//打印分割线
		printf("_");
	printf("\n");
	printf("ISBN: %s. NAME: %s. AUTHOR: %s. PRESS: %s. PRICE: %.3lf元. DATE：%d年 %d月 %d日\n",
	p -> isbn,
	p -> name,
	p -> author,
	p -> press,
	p -> price,
	p -> date.year,
	p -> date.month,
	p -> date.day);
}
	
	
	