#include "Queue.h"

void InitSQ(SQ *&q)
{
	q = (SQ *)malloc(sizeof(SQ));
	q->count = 0;
	q->front = MS-1;
}

void InitSQWithStr(SQ *&q, string str, int front)
{
	q = (SQ *)malloc(sizeof(SQ));
	q->front = front;
	q->count = 0;
	int len = str.length(), i, rear;
	for(i=0; i<len; i++)
	{
		if(SQIsFull(q))
		{
			cout << "¶ÓÒÑÂú£¬q->front=" << q->front << ",q->count=" << q->count << endl;
			break;
		}
		rear = (q->front+q->count+1) % MS;
		q->data[rear] = str[i];
		q->count ++;
	}
}

void DispSQ(SQ *q)
{
	int rear, i;
	cout << "q->front = " << q->front << endl;
	cout << "Elements:";
	for(i=0; i<q->count; i++)
	{
		rear = (q->front+i+1) % MS;
		cout << q->data[rear] << " ";
	}
	cout << endl;
	cout << "Detail:";
	for(i=0; i<q->count; i++)
	{
		rear = (q->front+i+1) % MS;
		cout << "q->data[" << rear << "]=" << q->data[rear] << " ";
	}
	cout << endl;
}


bool SQIsFull(SQ *q)
{
	return q->count == MS;
}

bool EnSQ(SQ *&q, ET e)
{
	if(SQIsFull(q))
		return false;
	int rear;
	rear = (q->front+q->count+1) % MS;
	q->data[rear] = e;
	q->count ++;
	return true;
}

bool SQIsEmpty(SQ *q)
{
	return q->count == 0;
}

bool ExSQ(SQ *&q, ET &e)
{
	if(SQIsEmpty(q))
		return false;
	q->front = (q->front+1) % MS;
	e = q->data[q->front];
	q->count --;
	return true;
}

void DeSQ(SQ *&q)
{
	free(q);
}