#include "stdafx.h"
#include "SqStack.h"

void InitStack(SqStack *&s)
{
	s = (SqStack*)malloc(sizeof(SqStack));
	s->Top = -1;
}

bool Push(SqStack *&s, ElemType e)
{
	if(s->Top == MaxSize-1)
		return false;
	s->Datas[++s->Top] = e;
	return  true;
}

bool IsEmpty(SqStack *s)
{
	if(s->Top == -1)
		return true;
	return false;
}

bool GetTop(SqStack *s,ElemType &e)
{
	if(IsEmpty(s))
		return false;
	e = s->Datas[s->Top];
	return true;
}

bool Pop(SqStack *&s, ElemType &e)
{
	if(IsEmpty(s))
		return false;
	e = s->Datas[s->Top--];
	return true;
}

void Destroy(SqStack *&s)
{
	free(s);
}
