#include <stdio.h>
#include <malloc.h>

#define MaxSize 100

typedef char ElemType;

typedef struct node
{
	ElemType data;
	struct node *lchild;
	struct node *rchild;
}BTNode;

void CreateBTree(BTNode *&b, char *str)
{
	BTNode *St[MaxSize], *p;
	int top = -1, k, j =0;
	char ch;
	b = NULL;
	ch = str[j];
	while(ch != '\0')
	{
		switch(ch)
		{
		case '(' : top++;
			St[top] = p;
			k = 1;
			break;
		case ')' : top--;
			break;
		case ',' : k=2;
			break;
		default:
			p = (BTNode *)malloc(sizeof(BTNode));
			p->data = ch;
			p->lchild = p->rchild = NULL;
			if(b == NULL)
				b = p;
			else
			{
				switch(k)
				{
				case 1:
					St[top]->lchild = p;
					break;
				case 2:
					St[top]->rchild = p;
					break;
				}
			}
		}
		j++;
		ch = str[j];
	}
}

void DispBTree(BTNode *b)
{
	if(b!=NULL)
	{
		printf("%c", b->data);
		if(b->lchild != NULL

void PreOrder(BTNode *b)  		//先序遍历的递归算法
{
	if (b!=NULL)  
	{	
		printf("%c ",b->data);	//访问根节点
		PreOrder(b->lchild);	//递归访问左子树
		PreOrder(b->rchild);	//递归访问右子树
	}
}

void InOrder(BTNode *b)   		//中序遍历的递归算法
{
	if (b!=NULL)  
	{	
		InOrder(b->lchild);		//递归访问左子树
		printf("%c ",b->data);	        //访问根节点
		InOrder(b->rchild);		//递归访问右子树
	}
}

void PostOrder(BTNode *b) 		//后序遍历的递归算法
{
	if (b!=NULL)  
	{	
		PostOrder(b->lchild);	//递归访问左子树
		PostOrder(b->rchild);	//递归访问右子树
		printf("%c ",b->data);	//访问根节点
	}
}

void main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))"); 
	printf("二叉树b:");DispBTNode(b);printf("\n");
	printf("先序遍历序列:\n");
	printf("  非递归算法:");PreOrder1(b);
	printf("中序遍历序列:\n");
	printf("  非递归算法:");InOrder1(b);
	printf("后序遍历序列:\n");
	printf("  非递归算法:");PostOrder1(b);	
	printf("层次遍历序列:");
	TravLevel(b);
	DestroyBTNode(b);
}
