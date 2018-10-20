#include <iostream>
#include <malloc.h>

#include "LiString.h"

using std::cout;
using std::endl;

void StrAssign(LinkStrNode *&s, char a[])
{
	s = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	LinkStrNode *r = s, *q;
	int i=0;
	while(a[i]!='\0')
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = a[i];
		r->next = q;
		r = q;
		i++;
	}
	r->next = NULL;
}

void DispStr(LinkStrNode *s)
{
	LinkStrNode *q = s;
	while(q->next!=NULL)
	{
		cout << q->next->data;
		q = q->next;
	}
	cout << endl;
}

int StrLength(LinkStrNode *s)
{
	LinkStrNode *q = s->next;
	int len = 0;
	while(q != NULL)
	{
		q = q->next;
		len ++;
	}
	return len;
}

LinkStrNode *InsStr(LinkStrNode *s, int i, LinkStrNode *s2)
{
	int len = StrLength(s);
	LinkStrNode *str, *r;
	str = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	str->next = NULL;
	r = str;
	if(i>len+1 || i<=0)
		return str;
	LinkStrNode *p = s->next, *p2 = s2->next, *q;
	for(int count=0; count<i-1; count++)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	while(p2 != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p2->data;
		r->next = q;
		r = q;
		p2 = p2->next;
	}
	while(p !=NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	r->next = NULL;
	return str;
}

LinkStrNode *DelStr(LinkStrNode *s, int i, int j)
{
	int length, count;
	LinkStrNode *str, *r, *q, *p;
	str = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	p = s->next;
	str->next = NULL;
	r = str;
	length = StrLength(s);
	if(i<=0 || j<0 || i+j>=length)
		return str;
	for(count=0; count<i-1; count++)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	for(count=0; count<j; count++)
	{
		p = p->next;
	}
	while(p != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	r->next = NULL;
	return str;
}

LinkStrNode *RepStr(LinkStrNode *s, int i, int j, LinkStrNode *s1)
{
	int length, count;
	LinkStrNode *q, *str, *r, *p, *p1;
	p = s->next;
	p1 = s1->next;
	str = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	str->next = NULL;
	r = str;
	length = StrLength(s);
	if(i<=0 || j<0 || i-1+j>length)
		return str;
	for(count=0; count<i-1; count++)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	for(count=0; count<j; count++)
		p = p->next;
	while(p1 != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p1->data;
		r->next = q;
		r = q;
		p1 = p1->next;
	}
	while(p != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	r->next = NULL;
	return str;
}

LinkStrNode *SubStr(LinkStrNode *s, int i, int j)
{
	int length, count;
	LinkStrNode *str, *r, *q, *p;
	p = s->next;
	str = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	str->next = NULL;
	r = str;
	length = StrLength(s);
	if(i<0 || j<0 || i-1+j>length)
		return str;
	for(count=0; count<i; count++)
		p = p->next;
	for(count=0; count<j; count++)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p->data;
		r->next = q;
		r = q;
		p = p->next;
	}
	r->next = NULL;
	return str;
}

LinkStrNode *Concatenate(LinkStrNode *s1, LinkStrNode *s2)
{
	LinkStrNode *str, *r, *p1, *p2, *q;
	str = (LinkStrNode *)malloc(sizeof(LinkStrNode));
	str->next = NULL;
	r = str;
	p1 = s1->next;
	p2 = s2->next;
	while(p1 != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p1->data;
		r->next = q;
		r = q;
		p1 = p1->next;
	}
	while(p2 != NULL)
	{
		q = (LinkStrNode *)malloc(sizeof(LinkStrNode));
		q->data = p2->data;
		r->next = q;
		r = q;
		p2 = p2->next;
	}
	r->next = NULL;
	return str;
}


