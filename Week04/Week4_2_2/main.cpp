#include "LinkQueue.cpp"

int main(int argc, char* argv[])
{
	LiQueue *q;
	InitQueue(q);
	cout << "�ѳ�ʼ���ӣ���ǰ��Ϊ" << (QueueEmpty(q) ? "��" : "�ǿ�") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		enQueue(q, datas[i]);
	}
	cout << "���Ӻ󣬶��еĳ���Ϊ��" << GetSize(q) << endl;


	return 0;
}

