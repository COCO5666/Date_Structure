#include "btree.cpp"
#include <stdio.h>
#include <malloc.h>

void main()
{
	BTNode *b;
	CreateBTNode(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))"); 
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
 