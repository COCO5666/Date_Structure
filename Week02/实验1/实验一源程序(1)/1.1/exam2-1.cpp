#include "sqlist.cpp"   //�������Ա���˳����ʾ
void main()
{
	SqList *L;
	ElemType e;
	InitList(L);
	ListInsert(L,1,'a');
	ListInsert(L,2,'b');
	ListInsert(L,3,'c');
	ListInsert(L,4,'d');
	ListInsert(L,5,'f');

	printf("�ս��������Ա�Ԫ�����£�\n");
	DispList(L);
    
	printf("���Ա�ĳ���Ϊ��%d\n",ListLength(L));

	GetElem(L,3,e);
    //printf("ȡ���ĵ�����Ԫ���ǣ�\n");
	printf("ȡ���ĵ�����Ԫ���ǣ�e=%c\n",e);

	printf("LocateElem(L,'a')=%d\n",LocateElem(L,'a'));

	ListInsert(L,4,'g');
	DispList(L);
	ListDelete(L,3,e);
	DispList(L);
	DestroyList(L);
}