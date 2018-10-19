// Week4_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SqQueue.cpp"



int main(int argc, char* argv[])
{
	SqQueue *q;
	InitQueue(q);
	ElemType e;
	cout << "刚初始化队列，队列为" << (QueueEmpty(q) ? "空" : "非空") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas)/sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		if(!enQueue(q,datas[i]))
		{
			cout<< "元素" << datas[i] << "入队失败，当前队列已满" <<endl;
		}
	}
	cout << "进队后，队列为" << (QueueEmpty(q) ? "空" : "非空") << "，此时队列的长度为" << GetSize(q) <<endl;

	cout << "出队的序列为";
	while(deQueue(q, e))
		cout << e <<" ";
	cout << endl;

	cout << "出队后，队列为" << (QueueEmpty(q) ? "空" : "非空") <<endl;
	return 0;
}

