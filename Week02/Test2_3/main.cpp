#include "LinkList.h"

int main()
{
    ElemType a[] = {1,3,2,9,0,4,7,6,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    LinkNode *L;
    CreateListF(L, a, n);
    cout<<"����β�巨����"<<endl<<"L:";
    DispList(L);
    CreateListR(L, a, n);
    cout<<"����ͷ�巨����"<<endl<<"L:";
    DispList(L);
    DelMaxNode(L);
    cout<<"ɾ�����ֵ�ڵ��"<<endl<<"L:";
    DispList(L);
    ReverseList(L);
    cout<<"���������"<<endl<<"L:";
    DispList(L);
    return 0;
}
