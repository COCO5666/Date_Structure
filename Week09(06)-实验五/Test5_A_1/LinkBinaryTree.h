#include<iostream>
#include<cstdio>

typedef char ElemType;

#define MaxSize 100

typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}LBTNode;

void CreateLBTree(LBTNode *&b, char *str);