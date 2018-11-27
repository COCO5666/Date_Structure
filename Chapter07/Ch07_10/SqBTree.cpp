#include "SqBTree.h"

void CreateSqBTFromLiBT(SBTNode *&SB, LBTNode *LB, int index)
{
	static bool flag = true;
	if(flag)
	{
		SB = (SBTNode *)malloc(sizeof(SBTree));
		flag = false;
		for(int j=0; j<MaxSize; j++)
		{
			SB[j]='#';
		}
	}
	if(LB!=NULL)
	{
		SB[index-1] = LB->data;
		CreateSqBTFromLiBT(SB, LB->lchild, 2*index);
		CreateSqBTFromLiBT(SB, LB->rchild, 2*index+1);
	}
	else
	{
		SB[index] = '#';
	}
}

void CreateSqBTree(SBTNode *&b, char *str)
{
	b = (SBTNode *)malloc(sizeof(SBTree));
	int j=0, index=1;
	for(;j<MaxSize;j++)
	{
		b[j]='#';
	}
	j=0;
	char ch;
	ch = str[j];
	while(ch!='\0')
	{
		switch(ch)
		{
		case '(':index=index*2;break;
		case ')':index=index/2;break;
		case ',':index=index+1;break;
		default:
			b[index-1]=ch;break;
		}
		j++;
		ch=str[j];
	}
}


void DispSqBTree(SBTNode *b, int index)
{
	if(b[index-1]!='#')
	{
		printf("%c", b[index-1]);
		if(b[2*index-1]!='#' || b[2*index] !='#')
		{
			printf("(");
			DispSqBTree(b, 2*index);
			if(b[2*index] != '#')
				printf(",");
			DispSqBTree(b, 2*index+1);
			printf(")");
		}
	}
}

void DestroySqBTree(SBTNode *b)
{
	if(b!=NULL)
	{
	free(b);
	b = NULL;
	}
}