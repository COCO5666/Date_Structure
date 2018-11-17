#include "LinkBinaryTree.h"
void main()
{	LBTNode *b,*p,*lc,*rc;
	CreateLBTree(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
	printf("�������Ļ�����������:\n");
	printf("  (1)���������:");DispLBTNode(b);printf("\n");
	printf("  (2)H�ڵ�:");
	p=FindNode(b,'H');
	if (p!=NULL)
	{	lc=LchildNode(p);
		if (lc!=NULL)
			printf("����Ϊ%c ",lc->data);
		else
			printf("������ ");
		rc=RchildNode(p);
		if (rc!=NULL)
			printf("�Һ���Ϊ%c",rc->data);
		else
			printf("���Һ��� ");
	}
	printf("\n");
	printf("  (3)������b�����:%d\n",LBTNodeDepth(b));
	printf("  (4)������b�Ľڵ����:%d\n",Nodes(b));
	printf("  (5)������b��Ҷ�ӽڵ����:%d\n",LeafNodes(b));
	printf("  (6)�ͷŶ�����b\n");
	DestroyLBTNode(b);
}