#include "fun.h"

void fun()
{
	ElemT ch, e;
	CQ *q;
	Initialize(q);
	while(cin >> ch)
	{
		cout << ch << endl;
		if(ch>='0' && ch<='9')
		{
			if(!EnterQueue(q, ch))
				cout << "队已满，无法再入队" << endl;
			else
				cout << "元素" << ch << "已入队" <<endl;
		}
		else if(ch>='a' && ch<='z')
		{
			if(!ExitQueue(q, e))
				cout << "队已空，无法再出队" << endl;
			else
				cout << "元素" << e << "已出队" <<endl;
		}
		else
		{
			Destroy(q);
			cout << "遇见结束字符，已销毁本队列" << endl;
			break;
		}
		cout << endl;
	}
}