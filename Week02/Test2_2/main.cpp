#include "linklist.cpp"

int main()
{
    ElemType a[] = {1,3,2,9,0,4,7,6,5,8};
    int n = sizeof(a)/sizeof(ElemType);
    //cout<<n<<endl;
    LinkNode * L;
    CreateListR(L,a,n);
    cout<<"L:";
    DispList(L);
    cout<<"ɾ�����ֵ�ڵ�"<<endl;
    delmaxnode(L);
    cout<<"L:";
    DispList(L);

    return 0;
}
