#include <cstdio>
#include <malloc.h>

#define MaxSize 100

typedef char ElemType;
typedef struct node
{
	ElemType data;				//����Ԫ��
	struct node *lchild;		//ָ������
	struct node *rchild;		//ָ���Һ���
} BTNode;

void CreateBTNode(BTNode *&b, char *str);
void DispBTNode(BTNode *b);
void DestroyBTNode(BTNode *&b);
void PreOrder(BTNode *b);
void InOrder(BTNode *b);
void PostOrder(BTNode *b);
void TravLevel(BTNode *b);