#include <malloc.h>
#include "SqList.h"

int main()
{
    ElemType a[] = {'a', 'b', 'c', 'd', 'f'};
    int n = sizeof(a)/sizeof(a[0]);
    SqList *L = (SqList *)malloc(sizeof(SqList));
    ElemType e;
    CreatSqList(L,a,n);
    cout<<"�ս�����˳�������"<<endl;
    DispSqList(L);
    cout<<"���Ա�ĳ���Ϊ��"<<GetLength(L)<<endl;
    GetElem(L,3,e);
    cout<<"ȡ���ĵ�����Ԫ�ص�ֵe=\'"<<e<<"\'"<<endl;
    cout<<"GetLocation(L,'a')="<<GetLocation(L,'a')<<endl;
    cout<<"�ڵ��ĸ�Ԫ��ǰ����\'g\'�õ���"<<endl;
    InsertElem(L,'g',4);
    DispSqList(L);
    DelElem(L,5,e);
    cout<<"ɾ�������Ԫ��\'"<<e<<"\'��õ���"<<endl;
    DispSqList(L);
    return 0;
}
