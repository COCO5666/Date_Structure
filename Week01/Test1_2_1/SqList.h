#ifndef SQLIST_H_INCLUDED

#define SQLIST_H_INCLUDED

#include "SqList.cpp"
void CreateSqList(SqList *&L, ElemType a[], int n);//����˳���
void DispSqList(SqList *L);//��ӡ˳����е�Ԫ��
int GetLength(SqList *L);//����˳���ĳ���
bool GetElem(SqList *L, int location, int &e);//Ѱ��λ��Ϊlocation��Ԫ�ص�ֵ������ֵ������e��
int GetLocation(SqList *L, ElemType e);//Ѱ��Ԫ��e��λ����ţ�������λ����ŷ���
bool InsertElem(SqList *&L, ElemType e, int location);//��λ�����Ϊlocation��Ԫ��ǰ����e
bool DelElem(SqList *&L, int location, ElemType &e);//�ȱ���λ�����Ϊlocation��Ԫ�ص�ֵ��e������ɾ����Ԫ��

#endif // SQLIST_H_INCLUDED

