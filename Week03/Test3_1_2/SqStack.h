#include <iostream>
#include <malloc.h>

using std::cin;
using std::cout;
using std::endl;

const int MaxSize = 500;

typedef char ElemType;

typedef struct
{
	ElemType Datas[MaxSize];
	int Top;
}SqStack;

void InitStack(SqStack *&s);

bool Push(SqStack *&s, ElemType e);

bool IsEmpty(SqStack *s);

bool GetTop(SqStack *s, ElemType &e);

bool Pop(SqStack *&s, ElemType &e);

void Destroy(SqStack *&s);
