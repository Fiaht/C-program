
#include <stdio.h>
#define N 100

//输入两个字符串函数
void input( char *a, char *b )
{
	printf("字符串1：");		
	gets(a);
	printf("字符串2：");
	gets(b);
}

//比较字符串每个字符的大小的函数
int my_strcmp( char *a, char *b )
{
	while( (*a != '\0') && (*b != '\0') )
	{
		if( *a > *b)
			return 0;
		else if( *a < *b )
			return 1;
		else
		{
			a++;
			b++;
		}
	}
	if((*a == '\0') && (*b != '\0'))//字符串b比字符串a长
		return 1;
	else if((*a != '\0') && (*b == '\0'))//字符串a比字符串b长
		return 0;
	else
		return 2;
}

//调用输入函数,调用比较大小函数,输出大小
int main()
{
	char a[N] = {0};
	char b[N] = {0};
	int result = 0;
	input(a,b);//调用输入函数
	result = my_strcmp(a,b);//调用比较大小函数
	printf("比较结果：");
	if( 0 == result)//输出大小
		printf("%s > %s", a, b);
	else if(1 == result)
		printf("%s < %s", a, b);
	else
		printf("%s = %s", a, b);
	return 0;
}
