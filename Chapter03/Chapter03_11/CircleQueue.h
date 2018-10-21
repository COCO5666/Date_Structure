#include "malloc.h"

#define ElemT char

const int MaxSize = 3;
typedef struct CircleQueue
{
	int data[MaxSize];
	int count;
	int front;
}CQ;

void Initialize(CQ *&q);
bool EnterQueue(CQ *&q, ElemT e);
bool ExitQueue(CQ *&q, ElemT &e);
