typedef char ElemType

typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}LBTNode;