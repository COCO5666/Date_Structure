#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include "LinkList.cpp"

void CreateListF(LinkNode *&L, ElemType a[], int n);//ͷ�巨����������
void DispList(LinkNode *L);//����������е�����Ԫ��
void CreateListR(LinkNode *&L, ElemType a[], int n);//β�巨����������
void DelMaxNode(LinkNode *&L);//ɾ�����ֵ�ڵ�
void ReverseList(LinkNode *&L);//��������

#endif // LINKLIST_H_INCLUDED
