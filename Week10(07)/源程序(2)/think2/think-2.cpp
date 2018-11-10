#include "btree.cpp"
#include <stdio.h>
#include <malloc.h>

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
	BTNode * b;
	b=CreateBT1("ABCD","BCAD",4);
	printf("�����������:\n");
	printf("    �ݹ��㷨:");PreOrder(b);printf("\n");
	printf("�����������:\n");
	printf("    �ݹ��㷨:");InOrder(b);printf("\n");
	printf("�����������:\n");
	printf("    �ݹ��㷨:");PostOrder(b);printf("\n");
}
 