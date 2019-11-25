#include<stdio.h>

//判断是否有不合格成绩的函数
int *seek(int (*grade)[3], int j)//j为int型，行指针 int a[100]  a[2] == *(a+2)
{
	int i;
	for (i=0; i<3; i++) 
	{
		if (grade[j][i] < 60)//grade[j]表示第j个人的三个成绩，grade[j][i]表示第j个人的i项成绩 
			return grade[j];//返回行指针
	}
	return NULL;
}

//输出成绩不合格学生成绩
int main() 
{
	int i;
	int grade[3][3]={{55,65,75},{65,75,85},{75,80,90}};
	int *fail;
	for (i=0; i<3; i++) //控制每个学生
	{
		fail = seek(grade,i);//用行指针做实参，调用seek函数
		if (fail != NULL)//表示有不合格成绩
		{
			printf("No.%d grade list: ", i+1);//
			//输出不合格学生成绩 
			for (i=0; i<3; i++)
				printf("%d ", fail[i]);
			printf("\n");
			return 0;
		}
	}
	printf("No failed student!\n");
	return 0;
}