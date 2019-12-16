#include<stdio.h>

#define MAX 29			//字符数量不超过29
#define N 5				//五本图书信息

struct date				//日期结构体
{
	int year,month,day;
};
struct book
{
		int isbn;			//书号
		char name[MAX];		//书名
		double price;		//价格
		struct date presdate;	//出版日期嵌套
}bk[N];

//输入函数 输出函数 选择排序函数声明
void read (struct book*);
void print(struct book*);
void select_sort (struct book*);

//主函数调用read print sort选择排序函数
int main()
{
	printf("PLEASE INPUT 5 BOOKS INFO\n");
	read(bk);
	select_sort(bk);	
	print(bk);
}

//read函数录入图书信息
void read(struct book *p)
{
	int i;
	for(i = 0; i < N; i++)
	{
		printf("THE %d BOOK'S ISBN, NAME, PRICE, DATE: ", i + 1);
		scanf("%d ", &p[i].isbn);
		//printf("THE %d BOOK'S NAME: ", i + 1);
		scanf("%s ", p[i].name);
		//printf("THE %d BOOK'S PRICE: ", i + 1);
		scanf("%lf ", &p[i].price);
		//printf("THE %d BOOK'S DATE: ", i + 1);
		scanf("%d %d %d",
		&p[i].presdate.year,
		&p[i].presdate.month,
		&p[i].presdate.day);
	}	
}

//输出图书信息print函数
void print(struct book *b)
{
	int i;
	for (i = 0;i < 66; i++) 
	{
		printf("_");
	}
	printf("\nISBN\t\tNAME\t\tPRICE\t\tDATE\n");
	for(i = 0; i < N; i++)
	{
		printf("%-14d  %-14s \t%-14.2lf %d年%d月%d日\n",
		b[i].isbn,
		b[i].name,
		b[i].price,
		b[i].presdate.year,
		b[i].presdate.month,
		b[i].presdate.day);
	}	
}

//选择排序函数
void select_sort(struct book *b)
{
	int k,i,j;
	struct book temp;
	for(i = 0;i < N -  1; i++)
	{
		k = i;
		for(j = i + 1; j < N; j++)
		{
			if(bk[k].isbn > bk[j].isbn) 
			k = j;
			if(k != i)
			{
			temp = bk[k];
			bk[k] = bk[i];
			bk[i] = temp;	
			}
		}
	}
}