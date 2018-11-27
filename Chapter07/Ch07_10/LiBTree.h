#ifndef LiBTree_H

#define LiBTree_H

#include <cstdio>
#include <malloc.h>

#define ElemType char
#define MaxSize 500

typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}LBTNode;

void CreateLiBTree(LBTNode *&b, char *str);
void DispLiBTree(LBTNode *b);
void DestroyLiBTree(LBTNode *&b);

#endif

