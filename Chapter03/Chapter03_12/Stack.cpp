#include "Stack.h"

void InitSS(SS *&s)
{
	s = (SS *)malloc(sizeof(SS));
	s->top = -1;
}

bool SSIsFull(SS *s)
{
	return s->top == MS-1;
}

bool Push(SS *&s, ET e)
{
	if(SSIsFull(s))
		return false;
	s->data[++s->top] = e;
	return true;
}

bool SSIsEmpty(SS *s)
{
	return s->top == -1;
}

bool Pop(SS *&s, ET &e)
{
	if(SSIsEmpty(s))
		return false;
	e = s->data[s->top--];
	return true;
}

void DeSS(SS *&s)
{
	free(s);
}