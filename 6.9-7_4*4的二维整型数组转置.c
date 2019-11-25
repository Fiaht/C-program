#include<stdio.h>

//输入4*4二维整型数组，调用转置函数
int main()
{
	void transArray(int array[4][4]);
	int array[4][4], i, j;
	printf("请输入4*4二维整型数组：\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
			scanf("%d", &array[i][j]);
	}
	transArray(array);//调用转置函数
	return 0;
}

//二维数组转置函数获得输入值，并输出转置后的二维整型数组
void transArray(int array[4][4])
{
	int newArray[4][4], i, j;
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
			newArray[j][i] = array[i][j];
	}
	printf("转置后的二维数组：\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
			printf("%d ", newArray[i][j] );
		printf("\n");
	}
}

