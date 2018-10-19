// Week4_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkQueue.cpp"

int main(int argc, char* argv[])
{
	LiQueue *q;
	ElemType e;
	InitQueue(q);
	cout << "已初始化队，当前队为" << (QueueEmpty(q) ? "空" : "非空") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		enQueue(q, datas[i]);
	}
	cout << "进队后，队列的长度为：" << GetSize(q);
	if(getTopData(q,e))
		cout << "，队首元素为：" << e;
	if(getEndData(q,e))
		cout << "，队尾元素为：" << e;
	cout << endl;

	cout << "出队的顺序为：";
	while(deQueue(q,e))
		cout << e << ' ';
	cout << endl;
	
	cout << "出队后，队列为" << (QueueEmpty(q) ? "空" : "非空") <<endl;
	return 0;
}

