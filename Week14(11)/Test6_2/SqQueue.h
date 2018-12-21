#ifndef MAXSIZE_V
#define MAXSIZE_V
const int MaxSize = 100;
#endif

#ifndef SQQUEUE_H
#define SQQUEUE_H
#include <malloc.h>

typedef int ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue *&q);
void DestroyQueue(SqQueue *&q);
bool QueueEmpty(SqQueue *q);
bool enQueue(SqQueue *&q, ElemType e);
bool deQueue(SqQueue *&q, ElemType &e);
#endif
