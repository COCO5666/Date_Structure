#include <stdio.h>
#include <malloc.h>
#include <iostream>
#define MaxSize 50

using namespace std;
typedef char ElemType;
typedef struct test
{	ElemType data[MaxSize];		//���˳���Ԫ��
   	int length;					//���˳���ĳ���
} SqList;
						//˳�������Ͷ���
void CreateList(SqList *&L,ElemType a[],int n);
void InitList(SqList *&L);
void DestroyList(SqList *&L);
int ListEmpty(SqList *L);
int ListLength(SqList *L);
void DispList(SqList *L);
int GetElem(SqList *L,int i,ElemType &e);
int LocateElem(SqList *L, ElemType e);
int ListInsert(SqList *&L,int i,ElemType e);
int ListDelete(SqList *&L,int i,ElemType &e);
//void TwoListToOneSet(Sqlist *&L1, Sqlist* &L2, Sqlist* &L3);
void Set(Sqlist*&L);

int main()
{
    test *t;
    char a[] = {'a','b','c','d','e'};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"�������Ա�"<<endl;
    CreateList(t,a,n);
    DispList(t);

    cout<<"�����Ա�ĳ���Ϊ��"<<endl;
    cout<<ListLength(t)<<endl;

    cout<<"��ȡ������Ԫ�ص�ֵ"<<endl;
    char e;
    GetElem(t,3,e);
    cout<<e<<endl;

    cout<<"��ȡ�ַ�b�����Ա��е�λ��"<<endl;
    e = 'b';
    cout<<LocateElem(t,e)<<endl;

    cout<<"���ַ�g���뵽���ĸ�Ԫ��֮ǰ"<<endl;
    e = 'g';
    ListInsert(t,4,e);
    DispList(t);

    ListDelete(t,5,e);
    cout<<"ɾ�������Ԫ��"<<e<<endl;
    DispList(t);
}

void CreateList(SqList *&L,ElemType a[],int n)
//����˳���
{
	int i;
	L=(SqList *)malloc(sizeof(SqList));
	for (i=0;i<n;i++)
		L->data[i]=a[i];
	L->length=n;
}
void InitList(SqList *&L)
{
	L=(SqList *)malloc(sizeof(SqList));	//���������Ա�Ŀռ�
	L->length=0;
}
void DestroyList(SqList *&L)
{
	free(L);
}
int ListEmpty(SqList *L)
{
	return(L->length==0);
}
int ListLength(SqList *L)
{
	return(L->length);
}
void DispList(SqList *L)
{
	int i;
	if (ListEmpty(L)) return;
	for (i=0;i<L->length;i++)
		printf("%c ",L->data[i]);
	printf("\n");
}
int GetElem(SqList *L,int i,ElemType &e)
{
	if (i<1 || i>L->length)
		return 0;
	e=L->data[i-1];    //i-1  ��˳����߼����ת��Ϊ�������
	return 1;
}
int LocateElem(SqList *L, ElemType e)
{
	int i=0;
	while (i<L->length && L->data[i]!=e) i++;
	if (i>=L->length)
		return 0;
	else
		return i+1;  //i+1  ��˳����������ת��Ϊ�߼����
}
int ListInsert(SqList *&L,int i,ElemType e)
{
	int j;
	if (i<1 || i>L->length+1)
		return 0;
	i--;						//��˳���λ��ת��Ϊelem�±�
	for (j=L->length;j>i;j--) 	//��data[i]������Ԫ�غ���һ��λ��
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;				//˳�������1
	return 1;
}
int ListDelete(SqList *&L,int i,ElemType &e)
{
	int j;
	if (i<1 || i>L->length)
		return 0;
	i--;						//��˳���λ��ת��Ϊelem�±�
	e=L->data[i];
	for (j=i;j<L->length-1;j++)	//��data[i]֮���Ԫ��ǰ��һ��λ��
		L->data[j]=L->data[j+1];
	L->length--;				//˳����ȼ�1
	return 1;
}

void TwoListToOneSet(Sqlist* &L1, Sqlist* &L2 ,Sqlist* &L3)
{

}
void Set(Sqlist*&)
{

}
