#include "CircleQueue.h"

void Initialize(CQ *&q)
{
	q = (CQ *)malloc(sizeof(CQ));
	q->count = 0;
	q->front = 0;
}

bool IsFull(CQ *q)
{
	return q->count == MaxSize;
}

bool EnterQueue(CQ *&q, ElemT e)
{
	if(IsFull(q))
		return false;
	 int rear;
	 rear = (q->front+q->count+1) % MaxSize;
	 q->data[rear] = e;
	 q->count ++;
	 return true;
}

bool IsEmpty(CQ *q)
{
	return q->count == 0;
}

bool ExitQueue(CQ *&q, ElemT &e)
{
	if(IsEmpty(q))
		return false;
	q->front = (q->front+1) % MaxSize;
	e = q->data[q->front];
	q->count--;
	return true;
}

void Destroy(CQ *&q)
{
	free(q);
}