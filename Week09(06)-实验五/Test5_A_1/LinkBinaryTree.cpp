#include "LinkBinaryTree.h"

void CreateLBTree(LBTNode *&b, char *str)
{
	LBTNode *St[MaxSize], *p;	//St数组作为顺序栈
	int top=-1, k, j=0;	//top作为栈顶指针
	char ch;
	b = NULL;	//初始时二叉链为空
	ch = str[j];
	while(ch!='\0')	//循环扫描str中的每个字符
	{
		switch(ch)
		{
		case '(':top++; St[top]=p; k=1;break;	//准备处理左孩子节点
		case ')':top--; break;
		case ',':k=2; break;	//准备处理右孩子节点
		default:
			p = (LBTNode *)malloc(sizeof(LBTNode)); p->data=ch; p->lchild=p->rchild=NULL;
			if(b==NULL)
				b = p;
			else
			{
				switch(k)
				{
				case 1:St[top]->lchild=p;break;
				case 2:St[top]->rchild=p;break;
				}
			}
		}
		j++;
		ch = str[j];
	}
}

void DispLBTNode(LBTNode *b)
{
	if(b!=NULL)
	{
		cout << b->data;
		if(b->lchild!=NULL||b->rchild!=NULL)
		{
			cout << "(";
			DispLBTNode(b->lchild);
			if(b->rchild!=NULL)
				cout << ",";
			DispLBTNode(b->rchild);
			cout << ")";
		}
	}
}

LBTNode *FindNode(LBTNode *b, ElemType x)
{
	LBTNode *p;                                                             
	if(b==NULL)
		return NULL;
	else if(b->data==x)
		return b;
	else
	{
		p=FindNode(b->lchild, x);
		if(p!=NULL)
			return p;
		else
			p = FindNode(b->rchild, x);
			return p;
	}
}

LBTNode *LchildNode(LBTNode *p)
{
	return p->lchild;
}

LBTNode *RchildNode(LBTNode *p)
{
	return p->rchild;
}

int LBTNodeDepth(LBTNode *b)
{
	int lChildDep, rChildDep;
	if(b==NULL)
		return 0;
	else
	{
		lChildDep=LBTNodeDepth(b->lchild);
		rChildDep=LBTNodeDepth(b->rchild);
		return(lChildDep>rChildDep)?(lChildDep+1):(rChildDep+1);
	}
}

int Nodes(LBTNode *b)
{
	int num1, num2;
	if(b==NULL)
		return 0;
	else
	{
		num1 = Nodes(b->lchild);
		num2 = Nodes(b->rchild);
		return (num1+num2+1);
	}
}

int LeafNodes(LBTNode *b)
{
	int num1, num2;
	if(b == NULL)
		return 0;
	else if(b->lchild==NULL && b->rchild==NULL)
		return 1;
	else
	{
		num1 = LeafNodes(b->lchild);
		num2 = LeafNodes(b->rchild);
		return (num1+num2);
	}
}

void DestroyLBTNode(LBTNode *&b)
{
	if(b == NULL)
		return;
	else
	{
		DestroyLBTNode(b->lchild);
		DestroyLBTNode(b->rchild);
		free(b);
		return;
	}
}