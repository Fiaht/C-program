#include <stdio.h>
#include <math.h>
#define N 10000//分割份数
double integral(double (*func)(double), double a, double b);

//调用积分函数输出结果
int main()
{
	double a, b;
	char x;
	double sinx, cosx, expx;
	printf("选择被积函数 s(sinx) | c(cosx) | e(exp)\n");
	scanf("%c",&x);
	printf("积分下限 = ");
	scanf("%lf", &a);
	printf("积分上限 = ");
	scanf("%lf", &b);
	if(x == 's')
	{
		sinx = integral(sin, a, b);
		printf("sinx = %lf\n", sinx);
	}
	else if (x == 'c') 
	{
		cosx = integral(cos, a, b);
		printf("cosx = %lf\n", cosx);
	}
	else if(x == 'e')
	{
		expx = integral(exp, a, b);
		printf("expx = %lf\n", expx);
	}
	return 0;
}

//计算积分的函数
double integral(double (*func)(double), double a, double b)
{
	double sum = 0;
	if (a < b)
	{
		double del, x = a;//a为积分下限，b为积分上限
		del = (b-a) / N;//将区间分成n份
		for (;x < b;)
		{
			x += del;//每一份区间宽度
			sum += func(x)*del;//一份区间的面积
		} 
		return sum;
	}
	else  
	{   
		double del, x= b;
		del = (a-b) / N;//将区间分成n份
		for (;x < a;)
		{
			x += del;//每一份区间宽度
			sum += func(x)*del;//一份区间的面积
		} 
		return (-sum);
	}
}