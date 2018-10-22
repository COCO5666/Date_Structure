#include "MyHead.h"

typedef struct SequenceStack
{
	ET data[MS];
	int top;
}SS;

void InitSS(SS *&s);
bool SSIsFull(SS *s);
bool Push(SS *&s, ET e);
bool SSIsEmpty(SS *s);
bool Pop(SS *&s, ET &e);
void DeSS(SS *&s);
