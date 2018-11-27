#include "LiBTree.h"

void CreateLiBTree(LBTNode *&b, char *str)
{
	LBTNode *St[MaxSize], *p;
	int top=-1,k,j=0;
	char ch;
	b = NULL;
	ch = str[j];
	while(ch!='\0')
	{
		switch(ch)
		{
		case '(':top++;St[top]=p;k=1;break;
		case ')':top--;break;
		case ',':k=2;break;
		default:p=(LBTNode *)malloc(sizeof(LBTNode));
			p->data=ch;
			p->lchild=p->rchild=NULL;
			if(b==NULL)
			{
				b=p;
			}
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
		ch=str[j];
	}
}

void DispLiBTree(LBTNode *b)
{
	if(b!=NULL)
	{
		printf("%c", b->data);
		if(b->lchild!=NULL || b->rchild!=NULL)
		{
			printf("(");
			DispLiBTree(b->lchild);
			if(b->rchild!=NULL)
			{
				printf(",");
			}
			DispLiBTree(b->rchild);
			printf(")");
		}
	}
}

void DestroyLiBTree(LBTNode *&b)
{
	if(b!=NULL)
	{
		DestroyLiBTree(b->lchild);
		DestroyLiBTree(b->rchild);
		free(b);
	}
}
