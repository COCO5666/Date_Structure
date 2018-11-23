#include "LBTNode.h"

void main()
{
	BTNode *b;
	CreateBTNode(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))"); 
	printf("二叉树b:");DispBTNode(b);printf("\n");
	printf("先序遍历序列:\n");
	printf("  非递归算法:");PreOrder(b);
	printf("中序遍历序列:\n");
	printf("  非递归算法:");InOrder(b);
	printf("后序遍历序列:\n");
	printf("  非递归算法:");PostOrder(b);	
	printf("层次遍历序列:");
	TravLevel(b);
	DestroyBTNode(b);
}
