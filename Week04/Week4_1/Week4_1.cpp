// Week4_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SqQueue.cpp"



int main(int argc, char* argv[])
{
	SqQueue *q;
	InitQueue(q);
	ElemType e;
	cout << "�ճ�ʼ�����У�����Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas)/sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		if(!enQueue(q,datas[i]))
		{
			cout<< "Ԫ��" << datas[i] << "���ʧ�ܣ���ǰ��������" <<endl;
		}
	}
	cout << "���Ӻ󣬶���Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") << "����ʱ���еĳ���Ϊ" << GetSize(q) <<endl;

	cout << "���ӵ�����Ϊ";
	while(deQueue(q, e))
		cout << e <<" ";
	cout << endl;

	cout << "���Ӻ󣬶���Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") <<endl;
	return 0;
}

