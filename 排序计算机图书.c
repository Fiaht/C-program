#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

//二维动态数组的建立和使用
void bubble_sort(char *s[N], int n);         		 //定义排序函数
int main()
{
	char *str[N], **p;
	for (int i=0; i<N; i++){
		str[i]=(char *)malloc(20*sizeof(char));      //为指针数组分配内存动态空间
		printf("计算机图书 %d 的名字: ", i+1);  		 //输入N个字符串
		scanf("%s", str[i]);
	}
	bubble_sort(str, N);                             //调用排序函数
	for (p=str, printf("\n字典排序后的结果 "); 
	p<str+N;
	printf(" \n%s", *p++));    						//输出排序后的N个字符串
	return 0;
}

//冒泡排序函数
void bubble_sort(char *s[N], int n)
{
	int i, j;
	char *t;
	for (i=0; i<n; i++)
	//比较字符串大小
		for (j=i+1; j<n; strcmp(s[i], s[j])>0 ? t=s[i], s[i]=s[j], s[j]=t, j++ : j++);
}