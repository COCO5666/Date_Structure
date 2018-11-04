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

