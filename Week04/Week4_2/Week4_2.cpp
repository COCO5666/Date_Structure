// Week4_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkQueue.cpp"

int main(int argc, char* argv[])
{
	LiQueue *q;
	ElemType e;
	InitQueue(q);
	cout << "�ѳ�ʼ���ӣ���ǰ��Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		enQueue(q, datas[i]);
	}
	cout << "���Ӻ󣬶��еĳ���Ϊ��" << GetSize(q);
	if(getTopData(q,e))
		cout << "������Ԫ��Ϊ��" << e;
	if(getEndData(q,e))
		cout << "����βԪ��Ϊ��" << e;
	cout << endl;

	cout << "���ӵ�˳��Ϊ��";
	while(deQueue(q,e))
		cout << e << ' ';
	cout << endl;
	
	cout << "���Ӻ󣬶���Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") <<endl;
	return 0;
}

