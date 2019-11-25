#include <stdio.h>
#include <string.h>

//初始化一百个空格，j是计算的单词个数
int function(char str[100]) 
{
	int i, j = 0;
	for(i = 0; str[i] != '\0'; i++)
	{
		//前一个位置不是空格，后一个位置是空格，则是一个单词
		if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1]=='\t'))
		j++;
	}
	return j;
}

//计算单词数量，并按字典顺序输出排在最前面的单词
int main()
{
	int num, k = 0, i = 0;
	char line[100],a[20],b[20];//定义两个一维数组储存字符串的位置
	gets(line);//键盘输入单词
	num = function(line);
	printf("单词个数：%d\n",num);
	for(i = 0; i <= 18; i++)
	a[i]='z';
	i=0;
	while(1)//1是bool值，代表true循环一直执行下去
	{
		if(line[i] == '\0') 
			break;
		else 
		{
			while(line[i] != ' ' && line[i] != '\0')
			{
				b[k] = line[i];
				k++;
				i++;
			}
			b[k] = '\0';
			while(line[i] != '\0')
			{
				if(line[i] != ' ') 
				break;
				else i++;
			}
			//比较字符串大小 若a大于b 则大于0
			if(strcmp(a,b) > 0)
			{
				strcpy(a,b);
				k = 0;
				b[0] = '\0';
			}
		}
	}
	printf("字典顺序排在最前面的单词："); 
	puts(a);	
}