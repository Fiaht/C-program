#include<stdio.h>
void josephus(int *man , int n , int m , int s);//用指针变量做函数参数
int find(int *a , int n , int key);//int a[] 与int *a等价 ，指针作为参数

//键盘输入犯人总数，报数间隔，处决顺序，并调用两个函数
int main()
{
	int i, n, m, s, c;//n总人数，m报数间隔，s从第几个人开始 
	int man[1000] = {0};
	printf("请输入犯人总数：");
	scanf("%d", &n);
	printf("请输入报数间隔：");
	scanf("%d", &m);
	printf("从第s个犯人开始处决：");
	scanf("%d", &s);
	s = s - 1;//保证第s个人报数是1
	//调用输出处决顺序
	josephus(man, n, m, s);
	printf("处决顺序：");
	for(i = 0; i < n; i++)
		printf("%d %c", man[i],((i + 1 % 15) == 0 ? '\n' : ' '));//15个处决序号并换行
	//调用查找函数寻找被赦免犯人
	c = 1;
	printf("\n最后被赦免的犯人：");
	for(i = 0; i < c; i++)
		printf("%d " , 1+find(man, n, (n - i)));
		printf("\n");
	}
	
//构造约瑟夫环
void josephus( int *man, int n, int m, int s)
{
	int i, k, pos;
	for(i = 0; i <= n; i++)
		man[i] = 0;
		i = k = 0;
	//pos=s表示从第s个人开始计数
	for(pos = s; k < n; pos = (pos + 1) % n)
	{
		if (man[pos] == 0)
			i++;
		if(i == m)
		{
			i = 0;
			k++;
			man[pos] = k;
		}
	}
}
	
//查找被赦免的犯人（即最后一个活着的犯人）在约瑟夫环中的位置
int find(int *a, int n, int key)
{
	int i;
	for(i = 0; i < n; i++)
		if(key == a[i])
		return i;
	return-1;
}
					