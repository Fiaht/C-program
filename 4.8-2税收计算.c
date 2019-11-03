#include<stdio.h>
int main()
{
	double salary,tax1,tax2,tax3,tax4,tax5;
	printf("Please input your salary\n");
	scanf("%lf",&salary);
	tax1=0.05*(salary-3000);
	tax2=25+0.1*(salary-3500);
	tax3=125+0.15*(salary-4500);
	tax4=350+0.2*(salary-6000);
	tax5=750+0.25*(salary-8000);
	if(salary<3000)
		printf("tax=0");
	else if(salary>=3000&&salary<3500){
		printf("tax=%.3lf",tax1);
	}
	else if(salary>=3500&&salary<4500){
		printf("tax=%.3lf",tax2);
	}
	else if(salary>=4500&&salary<6000){
		printf("tax=%.3lf",tax3);
	}
	else if(salary>=6000&&salary<8000){
		printf("tax=%.3lf",tax4);
	}
	else {
		printf("tax=%.3lf",tax5);
	}
	return 0;
}