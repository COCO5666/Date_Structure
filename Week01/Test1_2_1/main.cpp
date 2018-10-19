#include "SqList.h"
#include <malloc.h>

void UnionSqList(SqList *LA, SqList *LB, SqList *&LC)
{
    *LC =  *LA;
    int len = LA->length+LB->length;
    for(int i=LA->length,j=0,k=i; i<len; i++,j++)
    {
        if(!GetLocation(LC,LB->data[j]))
            InsertElem(LC,LB->data[j],++k);
    }
}

int main()
{
    ElemType a[]={'a','c','b'};
    int an = sizeof(a)/sizeof(a[0]);
    ElemType b[]={'a','d','b'};
    int bn = sizeof(b)/sizeof(b[0]);
    SqList *LA = (SqList *)malloc(sizeof(SqList));
    SqList *LB = (SqList *)malloc(sizeof(SqList));
    SqList *LC = (SqList *)malloc(sizeof(SqList));
    CreateSqList(LA, a, an);
    CreateSqList(LB, b, bn);
    UnionSqList(LA,LB,LC);
    cout<<"LA:";
    DispSqList(LA);
    cout<<"LB:";
    DispSqList(LB);
    cout<<"LC:";
    DispSqList(LC);
    return 0;
}
