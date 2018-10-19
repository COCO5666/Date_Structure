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

void CreateListF(LinkNode *&L, ElemType a[], int n)//ͷ�巨����������
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

void CreateListR(LinkNode *&L, ElemType a[], int n)//β�巨����������
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

void DispList(LinkNode *L)//����������е�����Ԫ��
{
    LinkNode *p = L->next;
    while(p!=NULL)
    {
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<endl;
}

void DelMaxNode(LinkNode *&L)//ɾ�����ֵ�ڵ�
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

void ReverseList(LinkNode *&L)//��������
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
