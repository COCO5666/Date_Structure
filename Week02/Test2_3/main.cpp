#include "LinkList.h"

int main()
{
    ElemType a[] = {1,3,2,9,0,4,7,6,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    LinkNode *L;
    CreateListF(L, a, n);
    cout<<"采用尾插法建表"<<endl<<"L:";
    DispList(L);
    CreateListR(L, a, n);
    cout<<"采用头插法建表"<<endl<<"L:";
    DispList(L);
    DelMaxNode(L);
    cout<<"删除最大值节点后"<<endl<<"L:";
    DispList(L);
    ReverseList(L);
    cout<<"逆置链表后"<<endl<<"L:";
    DispList(L);
    return 0;
}
