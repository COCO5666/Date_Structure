#include <cstdio>
#include <malloc.h>

#define MaxSize 100

typedef char ElemType;
typedef struct node
{
	ElemType data;				//数据元素
	struct node *lchild;		//指向左孩子
	struct node *rchild;		//指向右孩子
} BTNode;

void CreateBTNode(BTNode *&b, char *str);
void DispBTNode(BTNode *b);
void DestroyBTNode(BTNode *&b);
void PreOrder(BTNode *b);
void InOrder(BTNode *b);
void PostOrder(BTNode *b);
void TravLevel(BTNode *b);