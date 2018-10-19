#include <iostream>
#include <malloc.h>

using namespace std;
using std::cout;
using std::endl;

#define ElemType int

typedef struct LinkNode
{
    ElemType data;
    LinkNode *next;
};

void CreateListF(LinkNode *&L, ElemType a[], int n)//头插法建立单链表
{
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = NULL;
    for(int i=0; i<n; i++)
    {
        LinkNode *q = (LinkNode *)malloc(sizeof(LinkNode));
        q->data = a[i];
        q->next =L->next;
        L->next = q;

    }
}

void CreateListR(LinkNode *&L, ElemType a[], int n)//尾插法建立单链表
{
    L = (LinkNode *)malloc(sizeof(LinkNode));
    LinkNode *q,*r;
    r = L;
    for(int i=0; i<n; i++)
    {
        q = (LinkNode *)malloc(sizeof(LinkNode));
        q->data = a[i];
        r->next = q;
        r = q;
    }
    r->next = NULL;
}

void DispList(LinkNode *L)//输出单链表中的所有元素
{
    LinkNode *p = L->next;
    while(p!=NULL)
    {
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<endl;
}

void DelMaxNode(LinkNode *&L)//删除最大值节点
{
    LinkNode *maxp, *maxpre, *p, *t;
    if(L->next == NULL)
        return;
    maxp = L->next;
    maxpre = L;
    p = maxp->next;
    t = maxp;
    while(p!=NULL)
    {
        if(p->data>maxp->data)
            maxp = p,maxpre = t;
        t = p;
        p = p->next;
    }
    maxpre->next = maxp->next;
    free(maxp);
}

void ReverseList(LinkNode *&L)//逆置链表
{
    LinkNode *p, *q;
    p = L->next;
    L->next = NULL;
    while(q!=NULL)
    {
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
}
