#include <malloc.h>
#include "LinkStack.h"

void LSInitialize(LS *&s)
{
	s = (LS *)malloc(sizeof(LS));
	s->next = NULL;
}

bool LSIsEmpty(LS *s)
{
	return s->next == NULL;
}

void LSPush(LS *&s, char e)
{
	LS *q;
	q = (LS *)malloc(sizeof(LS));
	q->data = e;
	q->next = s->next;
	s->next = q;
}

bool LSPop(LS *&s, char e)
{
	if(LSIsEmpty(s))
		return false;
	LS *q;
	q = s->next;
	s->next = q->next;
	e = q->data;
	free(q);
	return true;
}

