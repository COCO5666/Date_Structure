#ifndef SQLIST_H_INCLUDED

#define SQLIST_H_INCLUDED

#include "SqList.cpp"
void CreateSqList(SqList *&L, ElemType a[], int n);//创建顺序表
void DispSqList(SqList *L);//打印顺序表中的元素
int GetLength(SqList *L);//返回顺序表的长度
bool GetElem(SqList *L, int location, int &e);//寻找位置为location的元素的值，并将值保存在e中
int GetLocation(SqList *L, ElemType e);//寻找元素e的位置序号，并将此位置序号返回
bool InsertElem(SqList *&L, ElemType e, int location);//在位置序号为location的元素前插入e
bool DelElem(SqList *&L, int location, ElemType &e);//先保存位置序号为location的元素的值至e，接着删除此元素

#endif // SQLIST_H_INCLUDED

