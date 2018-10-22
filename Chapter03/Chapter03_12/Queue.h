#include "MyHead.h"

typedef struct SequenceQueue
{
	ET data[MS];
	int count;
	int front;
}SQ;	//SQ = SequenceQueue

void InitSQ(SQ *&q);
void InitSQWithStr(SQ *&q, string str, int front);
void DispSQ(SQ *q);
bool SQIsFull(SQ *q);
bool EnSQ(SQ *&q, ET e);
bool SQIsEmpty(SQ *q);
bool ExSQ(SQ *&q, ET &e);
void DeSQ(SQ *&q);