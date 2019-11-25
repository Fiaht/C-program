#include<stdio.h>
#include<string.h>

//反序输出字符串
char *Reverse(char *arr)     
{
	int i = 0;
	int size = strlen(arr);//strlen函数求字符串长度
	char temp[100] = ""; //创建一个空数组，用来做中间变量
	for (i = 0; i < size; i++)
	{
		temp[i] = arr[size - i - 1];
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}
	return arr;
}

//输入字符串，调用反序函数，并输出反序字符串
int main()
{
	char a[100] = " ";
	printf("请输入字符串：");
	gets(a);//scanf("%s", a);键盘输入字符串
	Reverse(a);//调用反序函数
	puts(a);//printf("%s\n", a);输出字符串
	return 0;
}
