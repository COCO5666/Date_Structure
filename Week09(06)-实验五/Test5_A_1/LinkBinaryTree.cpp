#include "LinkBinaryTree.h"

void CreateLBTree(LBTNode *&b, char *str)
{
	LBTNode *St[MaxSize], *p;
	int top=-1, k, j=0;
	char ch;
	b = NULL;
	ch = str[j];
	while(ch!='\0')
	{
		switch(ch)
		{
		case '(':
			top++; St[top]=p; k=1;break;
		case ')':
			top--; break;
		case ',':
			k=2; break;
		default:
			p = (LBTNode *)malloc(sizeof(LBTNode));
			p->data=ch;
			p->lchild=p->rchild=NULL;
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
