#include <stdio.h>
#include <malloc.h>
#include <iostream>
#define MaxSize 50

using namespace std;
typedef char ElemType;
typedef struct test
{	ElemType data[MaxSize];		//存放顺序表元素
   	int length;					//存放顺序表的长度
} SqList;
						//顺序表的类型定义
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

    cout<<"创建线性表："<<endl;
    CreateList(t,a,n);
    DispList(t);

    cout<<"该线性表的长度为："<<endl;
    cout<<ListLength(t)<<endl;

    cout<<"获取第三个元素的值"<<endl;
    char e;
    GetElem(t,3,e);
    cout<<e<<endl;

    cout<<"获取字符b在线性表中的位置"<<endl;
    e = 'b';
    cout<<LocateElem(t,e)<<endl;

    cout<<"将字符g插入到第四个元素之前"<<endl;
    e = 'g';
    ListInsert(t,4,e);
    DispList(t);

    ListDelete(t,5,e);
    cout<<"删除第五个元素"<<e<<endl;
    DispList(t);
}

void CreateList(SqList *&L,ElemType a[],int n)
//建立顺序表
{
	int i;
	L=(SqList *)malloc(sizeof(SqList));
	for (i=0;i<n;i++)
		L->data[i]=a[i];
	L->length=n;
}
void InitList(SqList *&L)
{
	L=(SqList *)malloc(sizeof(SqList));	//分配存放线性表的空间
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
	e=L->data[i-1];    //i-1  将顺序表逻辑序号转化为物理序号
	return 1;
}
int LocateElem(SqList *L, ElemType e)
{
	int i=0;
	while (i<L->length && L->data[i]!=e) i++;
	if (i>=L->length)
		return 0;
	else
		return i+1;  //i+1  将顺序表物理序号转化为逻辑序号
}
int ListInsert(SqList *&L,int i,ElemType e)
{
	int j;
	if (i<1 || i>L->length+1)
		return 0;
	i--;						//将顺序表位序转化为elem下标
	for (j=L->length;j>i;j--) 	//将data[i]及后面元素后移一个位置
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;				//顺序表长度增1
	return 1;
}
int ListDelete(SqList *&L,int i,ElemType &e)
{
	int j;
	if (i<1 || i>L->length)
		return 0;
	i--;						//将顺序表位序转化为elem下标
	e=L->data[i];
	for (j=i;j<L->length-1;j++)	//将data[i]之后的元素前移一个位置
		L->data[j]=L->data[j+1];
	L->length--;				//顺序表长度减1
	return 1;
}

void TwoListToOneSet(Sqlist* &L1, Sqlist* &L2 ,Sqlist* &L3)
{

}
void Set(Sqlist*&)
{

}
