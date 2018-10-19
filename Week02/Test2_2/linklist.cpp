#include <iostream>
#include <stdio.h>
#include <malloc.h>

using std::cout;
using std::endl;

typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LinkNode;

void InitList(LinkNode *&L);//��ʼ��һ�����б�
void CreateListR(LinkNode *&L, ElemType a[], int n);//β�巨��������
void DispList(LinkNode *L);//��ӡһ���б�
void delmaxnode(LinkNode *&L);//ɾ�����ֵ���ڵĽ��

void InitList(LinkNode *&L)
{
    L = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = NULL;
}

void CreateListR(LinkNode *&L, ElemType a[], int n)
{
    LinkNode *s, *r;
    L = (LinkNode *)malloc(sizeof(LinkNode));
    r = L;
    for(int i=0; i<n; i++)
    {
        s = (LinkNode *)malloc(sizeof(LinkNode));
        s->data = a[i];
        r->next = s;
        r = s;
    }
    r->next = NULL;
}

void DispList(LinkNode *L)
{
    LinkNode *p = L->next;
    while(p!=NULL)
    {
        cout<<p->data<<' ';
        p = p->next;
    }
    cout<<endl;
}
void delmaxnode(LinkNode *&L)
{
    LinkNode *p = L->next, *pre=L, *maxp=p, *maxpre=pre;
    while(p!=NULL)
    {
        if(maxp->data < p->data)
        {
            maxp = p, maxpre = pre;
        }
        pre = p;
        p = p->next;
    }
    maxpre->next = maxp->next;
    free(maxp);
}
