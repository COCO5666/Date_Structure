#include <iostream>

#define ElemType char

const int ElemNumMax=50;

using namespace std;
using std::cout;

typedef struct
{
    ElemType data[ElemNumMax];
    int length=0;
}SqList;

void CreateSqList(SqList *&L, ElemType a[], int n)//创建顺序表
{
    for(int i=0; i<n; i++)
    {
        L->data[i] = a[i];
    }
    L->length = n;
}

void DispSqList(SqList *L)//打印顺序表中的元素
{
    for(int i=0; i<L->length; i++)
    {
        cout<<L->data[i]<<' ';
    }
    cout<<endl;
}

int GetLength(SqList *L)//返回顺序表的长度
{
    return L->length;
}

bool GetElem(SqList *L, int location, ElemType &e)//寻找位置为location的元素的值，并将值保存在e中
{
    location--;//将逻辑序号转化成物理序号
    if(location<0||location>=L->length)
        return false;
    e = L->data[location];
    return true;
}

int GetLocation(SqList *L, ElemType e)//寻找元素e的位置序号，并将此位置序号返回
{
    for(int i=0;i<L->length;i++)
    {
        if(e==L->data[i])
        {
            i++;//将物理序号转化成逻辑序号
            return i;
        }
    }
    return 0;
}

bool InsertElem(SqList *&L, ElemType e, int location)//在位置序号为location的元素前插入e
{
    location--;//将逻辑序号转化成物理序号
    if(location<0||location>L->length)
        return false;
    for(int i=L->length; i>location; i--)
    {
        L->data[i]=L->data[i-1];
    }
    L->data[location] = e;
    L->length++;
    return true;
}

bool DelElem(SqList *&L, int location, ElemType &e)//先保存位置序号为location的元素的值至e，接着删除此元素
{
    location--;
    if(location<0||location>=L->length)
        return false;
    e = L->data[location];
    int ElemEnd = L->length-1;
    for(int i=location;i<ElemEnd;i++)
    {
        L->data[i]=L->data[i+1];
    }
    L->length--;
    return true;
}

