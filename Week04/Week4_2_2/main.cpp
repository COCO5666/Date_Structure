#include "LinkQueue.cpp"

int main(int argc, char* argv[])
{
	LiQueue *q;
	InitQueue(q);
	cout << "已初始化队，当前队为" << (QueueEmpty(q) ? "空" : "非空") <<endl;

	ElemType datas[] = {'1', '2', '3', '4', '5'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		enQueue(q, datas[i]);
	}
	cout << "进队后，队列的长度为：" << GetSize(q) << endl;


	return 0;
}

