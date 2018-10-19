#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include "LinkList.cpp"

void CreateListF(LinkNode *&L, ElemType a[], int n);//头插法建立单链表
void DispList(LinkNode *L);//输出单链表中的所有元素
void CreateListR(LinkNode *&L, ElemType a[], int n);//尾插法建立单链表
void DelMaxNode(LinkNode *&L);//删除最大值节点
void ReverseList(LinkNode *&L);//逆置链表

#endif // LINKLIST_H_INCLUDED
