#include<stdio.h>

int  *seek( int  (*pnt_row)[3] )
{ 
	int i=0, *pnt_col;          /*定义一个(列)指针变量pnt_col */
	pnt_col=*(pnt_row+1);       /*使pnt_col指向下一行之首作标志用)*/
	for(; i<3; i++)
		if(*(*pnt_row+i)<60)   /*某项成绩不合格*/
		{ 
			pnt_col=*pnt_row;      /*使pnt_col指向本行之首*/
			break; 		     /*退出循环*/
		}
	return(pnt_col);
}

int main()
{
	int grade[3][3]={{55,65,75},{65,75,85},{75,80,90}};
	int i,j,*pointer; 	/*定义一个(列)指针变量pointer */
	for(i=0; i<3; i++) 		/*控制每个学生*/
	{ 
		pointer=seek(grade+i); 	/*用行指针作实参，调用seek()函数*/
		if(pointer==*(grade+i)) 	/*该学生至少有一项成绩不合格*/
		{ 
			/*输出该学生的序号和各项成绩*/
			printf("No.%d grade list: ", i+1); 
			for(j=0; j<3; j++)
				printf("%d  ",*(pointer+j));
			printf("\n");
		}
	}
}