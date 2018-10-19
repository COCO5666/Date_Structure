#include <iostream>
#include <malloc.h>

using std::cout;
using std::endl;

typedef char ElemType;
struct LinkStack
{
	ElemType data;
	LinkStack *next;
};

void Init(LinkStack *&s)
{
	s = (LinkStack*)malloc(sizeof(LinkStack));
	s->next = NULL;
}

bool IsEmpty(LinkStack *s)
{
	return (s->next == NULL);
}

void Push(LinkStack *&s, ElemType e)
{
	LinkStack *q = (LinkStack*)malloc(sizeof(LinkStack));
	q->data  = e;
	q->next = s->next;
	s->next = q;
}

bool GetTop(LinkStack *s, ElemType &e)
{
	if(IsEmpty(s))
		return false;
	e = s->next->data;
	return true;
}

bool Pop(LinkStack *&s, ElemType &e)
{
	if(IsEmpty(s))
		return false;
	LinkStack *q = s->next;
	s->next = q->next;
	e = q->data;
	free(q);
	return true;
}

void Destroy(LinkStack *&s)
{
	ElemType e;
	while(Pop(s, e));
	free(s);
}

#include "StdAfx.h"
