#include "sqlist.cpp"   //假设线性表以顺序表表示
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

	printf("刚建立的线性表元素如下：\n");
	DispList(L);
    
	printf("线性表的长度为：%d\n",ListLength(L));

	GetElem(L,3,e);
    //printf("取到的第三个元素是：\n");
	printf("取到的第三个元素是：e=%c\n",e);

	printf("LocateElem(L,'a')=%d\n",LocateElem(L,'a'));

	ListInsert(L,4,'g');
	DispList(L);
	ListDelete(L,3,e);
	DispList(L);
	DestroyList(L);
}