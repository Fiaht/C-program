#include<stdio.h>
#include<string.h>

void sort(char *name[ ], int count)
{ 
	char *temp_p;
	int i, j, min;
	for(i = 0; i < count - 1; i++)        /*外循环：控制选择次数*/
	{
		min = i; 		                /*预置本次最小串的位置*/
		for(j = i + 1; j < count; j++)   /*内循环：选出本次的最小串*/
			if(strcmp(name[min],name[j]) > 0) /*存在更小的串*/
				min = j; 			
			if(min != i) 		/*存在更小的串，交换位置*/
			temp_p = name[i],
			name[i] = name[min],
			name[min] = temp_p;
	}
}

int main()
{
	char *name[5] = {"BASIC","FORTRAN","PASCAL","C","FoxBASE"};
	int i = 0;
	sort(name, 5);       /*使用字符指针数组名作实参，用排序函数sort()*/
	for(; i < 5; i++) 
	printf("%s\n", name[i]);
}	

