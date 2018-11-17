//文件名:exp7-6.cpp
#include <stdio.h>
#include <string.h>
#define N 50		//叶子节点数
#define M 2*N-1		//树中节点总数

typedef struct
{
	char data[5];	//节点值
	int weight;		//权重
	int parent;		//双亲节点
	int lchild;		//左孩子节点
	int rchild;		//右孩子节点
} HTNode;

typedef struct
{
	char cd[N];		//存放哈夫曼码
	int start;
} HCode;

void CreateHT(HTNode ht[], int n);
void CreateHCode(HTNode ht[], HCode hcde[], int n);
void DispHCode(HTNode ht[], HCode hcd[], int n);