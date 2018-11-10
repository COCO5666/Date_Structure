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

void PreOrder(BTNode *b)  		//��������ĵݹ��㷨
{
	if (b!=NULL)  
	{	
		printf("%c ",b->data);	//���ʸ��ڵ�
		PreOrder(b->lchild);	//�ݹ����������
		PreOrder(b->rchild);	//�ݹ����������
	}
}

void InOrder(BTNode *b)   		//��������ĵݹ��㷨
{
	if (b!=NULL)  
	{	
		InOrder(b->lchild);		//�ݹ����������
		printf("%c ",b->data);	        //���ʸ��ڵ�
		InOrder(b->rchild);		//�ݹ����������
	}
}

void PostOrder(BTNode *b) 		//��������ĵݹ��㷨
{
	if (b!=NULL)  
	{	
		PostOrder(b->lchild);	//�ݹ����������
		PostOrder(b->rchild);	//�ݹ����������
		printf("%c ",b->data);	//���ʸ��ڵ�
	}
}

void main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))"); 
	printf("������b:");DispBTNode(b);printf("\n");
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");PreOrder1(b);
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");InOrder1(b);
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");PostOrder1(b);	
	printf("��α�������:");
	TravLevel(b);
	DestroyBTNode(b);
}
