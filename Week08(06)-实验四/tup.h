#include <stdio.h>
#define M 4
#define N 4
#define MaxSize  100         //矩阵中非零元素最多个数
typedef int ElemType;
typedef struct
{
	int r;					//行号
	int c;					//列号
	ElemType d;				//元素值
} TupNode;					//三元组定义
typedef struct 
{	
	int rows;				//行数
	int cols;				//列数
	int nums;				//非零元素个数
	TupNode data[MaxSize];
} TSMatrix;					//三元组顺序表定义

void CreatMat(TSMatrix &t,ElemType A[M][N])  //从一个二维稀疏矩阵创建其三元组表示
{
	int i,j;
	t.rows=M;t.cols=N;t.nums=0;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++) 
			if (A[i][j]!=0) 	//只存储非零元素
			{
				t.data[t.nums].r=i;t.data[t.nums].c=j;
				t.data[t.nums].d=A[i][j];t.nums++;
			}
	}
}


void DispMat(TSMatrix t)		//输出三元组
{
	int i;
	if (t.nums<=0)			//没有非零元素时返回
		return;
	printf("\t%d\t%d\t%d\n",t.rows,t.cols,t.nums);
	printf("\t------------------\n");
	for (i=0;i<t.nums;i++)
		printf("\t%d\t%d\t%d\n",t.data[i].r,t.data[i].c,t.data[i].d);
}

