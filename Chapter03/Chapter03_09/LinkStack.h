#include <iostream>

typedef  struct LinkStack
{
	char data;
	struct LinkStack *next;
}LS;

void LSInitialize(LS *&s);
bool LSIsEmpty(LS *s);
void LSPush(LS *&s, char e);
bool LSPop(LS *&s, char e);