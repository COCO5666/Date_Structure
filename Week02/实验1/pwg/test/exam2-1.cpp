
#include <stdio.h>
#define MaxSize 50
typedef char ElemType; 
typedef struct 
{	ElemType data[MaxSize];		//存放顺序表元素
   	int length;					//存放顺序表的长度
} SqList;
extern void CreateList(SqList *&L,ElemType a[],int n);
extern void InitList(SqList *&L);
extern void DestroyList(SqList *&L);
extern int ListEmpty(SqList *L);
extern int ListLength(SqList *L);
extern void DispList(SqList *L);
extern int GetElem(SqList *L,int i,ElemType &e);
extern int LocateElem(SqList *L, ElemType e);
extern int ListInsert(SqList *&L,int i,ElemType e);
extern int ListDelete(SqList *&L,int i,ElemType &e);

void main()
{
	SqList *L;
	ElemType e;
	InitList(L);
	ListInsert(L,1,'a');
	ListInsert(L,2,'c');
	ListInsert(L,3,'a');
	ListInsert(L,4,'d');
	ListInsert(L,5,'b');
	printf("ListLength(L)=%d\n",ListLength(L));
	printf("ListEmpty(L)=%d\n",ListEmpty(L));
	GetElem(L,3,e);
	printf("e=%c\n",e);
	printf("LocateElem(L,'a')=%d\n",LocateElem(L,'a'));
	ListInsert(L,4,'e');
	DispList(L);
	ListDelete(L,3,e);
	DispList(L);
	DestroyList(L);
}