#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/malloc.h>
#define contestant struct contestant 
#define len sizeof(contestant)

//建立选手姓名与成绩的结构体
contestant
{
	char name;
	float score;
	contestant *next;
};

int n = 0;//选手的积分，起始都为0

//函数声明
contestant *createList();			 		//选手报名函数，链表的建立
contestant *insert(contestant *head);		//录入选手成绩函数，链表的插入
contestant *sort(int n0, contestant *head);	//根据选手成绩排序函数
void print(contestant *head);				//输出比赛结果到文件函数

//主函数
int main()
{
	contestant *head = NULL;
	int n;
	head = createList();//调用函数建立链表
	head = insert(head);//录入选手成绩
	print (head);
}

//选手报名函数，尾插法建立链表
contestant *createList()
{
	contestant *p = NULL, *p1, *p2 = NULL; 	//置空链表
	char c;
	printf("比赛报名，请输入选手姓名\n");
	scanf("%c", &c);
	while (c!='#')					  	 	//若选手姓名不为#，则报名继续，否则比赛开始
	{
		n++;
		p1 = (contestant *)malloc(len);		//动态分配内存
		p1->name = c;
		p1->score = 0;	
		p1->next = NULL;
		if (p2 != NULL)
			p2->next = p1;
		else
			p = p1;
		p2 = p1;
		getchar();
		scanf("%c", &c);
	}
	return p;
}

//录入选手成绩函数，链表的插入
contestant *insert(contestant *head)
{
	char c;		//选手姓名
	float x;	//选手成绩
	int n0;
	contestant *p, *p1;
	printf("比赛开始！\n");
	printf("请输入选手的姓名与积分\n");
	getchar();
	scanf("%c", &c);
	while (c != '#')
	{
		scanf("%f", &x);
		n0 = 1;
		p = head;
		while (p != NULL && p->name != c)
		{
			p = p->next;
			n0++;
		}
		if (p == NULL)	
			printf("未找到该选手\n");
		else 
		{
			printf("积分已录入, 输入“ # “结束录入\n");
			p->score += x;
			head = sort(n0, head);//调用排序函数调整成绩顺序
		}
		getchar();
		scanf("%c", &c);
	}
	return (head);
}

//根据选手成绩排序函数，降序输出
contestant *sort(int n0, contestant *head)
{
	contestant *p1=head, *p2=head, *p3=head;
	int i;
	if (n0 > 1)
	{
		for (i = 1; i < n0-1; i++)
			p1 = p1->next;
		while (p2 != NULL && p2->score >= p1->next->score)//后面选手成绩大于前一个选手，交换顺序
		{
			p3 = p2;
			p2 = p2->next;
		}
		if (p2 == head)
		{
			head = p1->next;
			p1->next = p1->next->next;
			head->next = p2;
		}
		else 
		{
			p3->next = p1->next;
			p1->next = p1->next->next;
			p3->next->next = p2;
		}	
	}
	else 
	{
		while (p2->score >= head->score && p2 != NULL)
		{
			p3 = p2;
			p2 = p2->next;
		}
		p3->next = head;
		head = head->next;
		p3->next->next = p2;
	}
	return (head);
}

//输出比赛结果到文件函数
void print(contestant *head)
{
	contestant *p = head;
	FILE *fp; 
	if ((fp = fopen("result.txt", "w")) == NULL)//用只写方式建立一个文本文件
	{
		printf("Can\'t fopen result.txt.\n");
		exit(0);
	}
	while (p != NULL)
	{
		fprintf(fp,"%c  %.2f\n", p->name, p->score);
		p=p->next;
	}
	printf("比赛结束！\n");
	printf("比赛结果已输出至名为result.txt文件\n");
}