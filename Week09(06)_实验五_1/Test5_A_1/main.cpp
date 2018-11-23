#include "LinkBinaryTree.h"
void main()
{	LBTNode *b,*p,*lc,*rc;
	CreateLBTree(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
	printf("二叉树的基本运算如下:\n");
	printf("  (1)输出二叉树:");DispLBTNode(b);printf("\n");
	printf("  (2)H节点:");
	p=FindNode(b,'H');
	if (p!=NULL)
	{	lc=LchildNode(p);
		if (lc!=NULL)
			printf("左孩子为%c ",lc->data);
		else
			printf("无左孩子 ");
		rc=RchildNode(p);
		if (rc!=NULL)
			printf("右孩子为%c",rc->data);
		else
			printf("无右孩子 ");
	}
	printf("\n");
	printf("  (3)二叉树b的深度:%d\n",LBTNodeDepth(b));
	printf("  (4)二叉树b的节点个数:%d\n",Nodes(b));
	printf("  (5)二叉树b的叶子节点个数:%d\n",LeafNodes(b));
	printf("  (6)释放二叉树b\n");
	DestroyLBTNode(b);
}