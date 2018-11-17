#include <stdio.h>
#include <string.h>

#define N 50		//叶子结点数
#define M 2*N-1		//树中结点总数

typedef struct
{
	char data[5];	 //结点值
	int weight;	     //权重
	int parent;		//双亲结点
	int lchild;		//左孩子结点
	int rchild;		//右孩子结点
} HTNode;

typedef struct
{
	char cd[N];		//存放哈夫曼码
	int start;
} HCode;

void CreateHT(HTNode ht[], int n);
void CreateHCode(HTNode ht[], HCode hcd[], int n);
void DispHCode(HTNode ht[], HCode hcd[], int n);
