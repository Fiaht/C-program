#include <stdio.h>
#include<string.h>
#include <math.h>

//计算每个学生以及每门课的平均分,计算平均分方差
float aver(int array[5][3], float avel[5], float avec[3])
{
	int i,j;
	float suml, sumc;
	float xave = 0.0,x2ave = 0.0,variance;
	//计算每门课的平均分
	for(i = 0; i < 5; i++)
	{
		suml = 0.0;
		for ( j = 0; j < 3; j++)
		{
			suml += array[i][j];        
		}
		avel[i] = suml/3;                
	}
	//计算每个学生的平均分
	for(j = 0; j < 3; j++)
	{
		sumc = 0.0;
		for (i = 0; i < 5; i++)
		{
			sumc += array[i][j];        
		}
		avec[j] = sumc / 5;                
	}
	//计算平均分方差
	for(i = 0; i < 5; i++)
	{
		xave += avel[i];
		x2ave += avel[i]*avel[i];
	}
	xave /= 5.0;//浮点型所以是5.0，不能是5
	x2ave /= 5.0;
	variance = x2ave - xave*xave;
	return variance;//直接调用函数的返回值
}

//找出最高分对应的学生和课程
int max(int array[5][3])
{
	int i, j, maxn;
	maxn = array[0][0];
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(array[i][j] >= maxn)
			{
				maxn = array[i][j];
			}
		}
	}
	return maxn;
}

//输出最高分学生的成绩、名字和课程
int goodsudent(int array[5][3],char stu[5][100],char cls[3][100])
{
	int i, j, maxn, max_i = 0, max_j = 0, max_i1 = 0, max_j1 = 0;
	maxn = array[0][0];
	for(i = 0; i < 5; i++)
	{
		for(j = 0;j < 3; j++)
		{
			if(array[i][j] > maxn)
			{
				maxn = array[i][j];
				max_i = i;
				max_j = j;				
			}
		}
	}
	printf("%-20s%-20s\n", stu[max_i], cls[max_j]);//%-20s右边补空格20个
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(array[i][j] == maxn && (i != max_i || j != max_j))
			{
				maxn = array[i][j];
				max_i = i;
				max_j = j;
				printf("%-20s%-20s\n", stu[max_i], cls[max_j]); //%-20s右边补空格20个
			}
		}
	}
	return 0;
}

//录入学生名字和课程名并输出成绩表格
int main ()
{   int i, j, sp, score[5][3];
	float avel[5], avec[3];
	char student[5][100], subject[3][100], cache[20] = "average";
	for (i = 0; i < 5; i++)
	{
		printf("student %d name:", i + 1);
		gets(student[i]);
	}
	for (i = 0 ; i < 3 ; i++)
	{
		printf("subject %d name:", i + 1);
		gets(subject[i]);
	}
	for(i = 0; i < 5 ; i++)
	{
		for(j = 0 ; j <3; j++)
		{
			printf("%s's %s score:",student[i],subject[j]);
			scanf("%d",&score[i][j]);
		}
	}
	//打印成绩表
	aver(score, avel, avec);//调用平均分函数
	printf("\nscore table\n");
	for(sp = 1; sp <=20; sp++)//输出20个空格使之对齐
		printf(" ");
	for ( i = 0; i < 3; i++)//输出课程名
	{
		printf("%-20s",subject[i]);//%-20s右边补空格20个
	}
	printf("average\n");    
	for ( i = 0; i < 5; i++)
	{
		printf("%-20s", student[i]);//%-20s右边补空格20个
		for ( j = 0; j < 3; j++)
		{
			printf("%-20d", score[i][j]);//输出整型和空格总长度为20
		}
		printf("%.2f\n",avel[i]);   
	}
	printf("%-20s",cache);//%-20s右边补空格20个，cache[20] = "average"
	for( j = 0; j < 3; j++)
	{
		printf("%-20.2f", avec[j]);
	}
	//return variance;直接调用函数的返回值
	printf("\n\nThe variance of all student average scores is %.4f\n",aver(score,avel,avec));
	max(score);
	printf("Highest Score: %d\n",max(score));
	goodsudent(score,student,subject);
}
