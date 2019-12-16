#include <stdio.h>
#include <string.h> 

//排序函数
void bubsort(char name[][100]) 
{
	int i, j; 
	char temp[100];//中介值设定 
	//冒泡排序 
	for(i = 1; i < 5; i++)
	{
	for(j = i+1; j <= 5; j++)
		if(strcmp(name[i], name[j]) == 1)
		{
			strcpy(temp, name[i]); 
			strcpy(name[i], name[j]);
			strcpy(name[j], temp);
		}  
	}
} 

//输入计算机图书信息，调用冒泡排序函数，输出排序后的结果
int main()
{
	char name[5][100];
	int i, k;
	char s[100]; 
	for(i = 0; i < 5; i++)
	{
		printf("计算机图书 %d 的名字 : ", i+1);
		fgets(name[i], 100, stdin);//输入流读取函数
	}
	bubsort(name); //void函数的冒泡排序比较
	for(i = 0; i < 5; i++)
		printf("字母排序后第 %d 本计算机图书名:%s",i+1, name[i]); 
	return 0; 
} 