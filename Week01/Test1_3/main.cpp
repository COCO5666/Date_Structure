#include <malloc.h>
#include "SqList.h"

int main()
{
    ElemType a[] = {'a', 'b', 'c', 'd', 'f'};
    int n = sizeof(a)/sizeof(a[0]);
    SqList *L = (SqList *)malloc(sizeof(SqList));
    ElemType e;
    CreatSqList(L,a,n);
    cout<<"刚建立的顺序表如下"<<endl;
    DispSqList(L);
    cout<<"线性表的长度为："<<GetLength(L)<<endl;
    GetElem(L,3,e);
    cout<<"取到的第三个元素的值e=\'"<<e<<"\'"<<endl;
    cout<<"GetLocation(L,'a')="<<GetLocation(L,'a')<<endl;
    cout<<"在第四个元素前插入\'g\'得到："<<endl;
    InsertElem(L,'g',4);
    DispSqList(L);
    DelElem(L,5,e);
    cout<<"删除第五个元素\'"<<e<<"\'后得到："<<endl;
    DispSqList(L);
    return 0;
}
