#include <stdio.h>
#include "btree.cpp"
void main()
{	BTNode *b,*p,*lp,*rp;;
	CreateBTNode(b,"A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))");
	printf("�������Ļ�����������:\n");
	printf("  (1)���������:");DispBTNode(b);printf("\n");
	printf("  (2)H�ڵ�:");
	p=FindNode(b,'H');
	if (p!=NULL)
	{	lp=LchildNode(p);
		if (lp!=NULL) 
			printf("����Ϊ%c ",lp->data);
		else
			printf("������ ");
		rp=RchildNode(p);
		if (rp!=NULL)
			printf("�Һ���Ϊ%c",rp->data);
		else
			printf("���Һ��� ");
	}
	printf("\n");
	printf("  (3)������b�����:%d\n",BTNodeDepth(b));
	printf("  (4)������b�Ľڵ����:%d\n",Nodes(b));
	printf("  (5)������b��Ҷ�ӽڵ����:%d\n",LeafNodes(b));
	printf("  (6)�ͷŶ�����b\n");
	DestroyBTNode(b);
}
