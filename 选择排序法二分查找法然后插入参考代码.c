#include<stdio.h>
int main()
{
	int num[15]={569,100,321,313,276,865,97,723,7,481};
	int i,k,max,c,m,x,x1,x2,x3,t;
	
	//选择排序
	for(k=9;k>=1;k--){//九次循环排序
		for(i=0,max=0;i<=(k-1);i++){
			if(num[max]<num[i+1])
				max=i+1;//把大的值的下标赋给max
		}
		
		//打印出每轮排序后的结果
		c=num[k];
		num[k]=num[max];
		num[max]=c;
		t=10-k;
		printf("第%d轮选择排序后:",t);
		for(i=0;i<=9;i++)//每轮输出十个数
			printf("%d ",num[i]);
		printf("\n");
	}
	printf("选择排序完成后的结果:");
	for(i=0;i<=9;i++)
		printf("%d ",num[i]);
	printf("\n");

	//m为计数值，最大允许新增15-10==5个数 
	for(m=1;m<=5;){
		printf("请输入一个正整数: ");
		scanf("%d",&x);
		//二分查找法
		if(x>=0){
			for(x1=0,x2=(8+m);(x2-x1)>=2;){
				x3=(x1+x2)/2;
				if(x<num[x3])
					x2=x3;
				if(x>num[x3])
					x1=x3;
				if(x==num[x3]){
					x2=x3;
					break;
				}
			}
			if(x==num[x1])
			printf("查找到，序号为%d\n",x1);
			if(x==num[x2])
			printf("查找到，序号为%d\n",x2);
		
			if(x!=num[x1]&&x!=num[x2]){
				printf("未查找到\n");
				//准备插入，位置为x1和x2之间 
				if(x<num[x2]&&x>num[x1]){
					//把x2之后的值往后腾出一位 
					for(i=8+m;i>=x2;i--)
						num[i+1]=num[i];
					num[x2]=x;
				}
				//大于所有值
				if(x>num[x2])
					num[9+m]=x;
				//小于所有值
				if(x<num[x1]){
					for(i=8+m;i>=x1;i--)
					num[i+1]=num[i];
					num[x1]=x;
				}
				//插入后，计数值+1 
				m++;
				//打印 
				for(i=0;i<=8+m;i++)
					printf("%d ",num[i]);
				printf("\n");
			}
		}
		//提前终止条件 
		if(x<0){
			printf("数据不合法，结束");
			break;
		}
	}
	return 0; 
}
