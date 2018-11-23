#include<iostream>
#include<cstdio>

using std::cout;
using std::endl;

typedef char ElemType;

#define MaxSize 100

typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}LBTNode;

void CreateLBTree(LBTNode *&b, char *str);
void DispLBTNode(LBTNode *b);
LBTNode *FindNode(LBTNode *b, ElemType x);
LBTNode *LchildNode(LBTNode *p);
LBTNode *RchildNode(LBTNode *p);
int LBTNodeDepth(LBTNode *b);
int Nodes(LBTNode *b);
int LeafNodes(LBTNode *b);
void DestroyLBTNode(LBTNode *&b);
