#include "LBTNode.h"

void main()
{
	BTNode *b;
	CreateBTNode(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))"); 
	printf("������b:");DispBTNode(b);printf("\n");
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");PreOrder(b);
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");InOrder(b);
	printf("�����������:\n");
	printf("  �ǵݹ��㷨:");PostOrder(b);	
	printf("��α�������:");
	TravLevel(b);
	DestroyBTNode(b);
}
