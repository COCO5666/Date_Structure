#include <iostream>
#include <string>

#include "CircleQueue.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string s;
	int i, len;
	bool a,b;
	ElemT e;
	CQ *q;
	Initialize(q);
	while(true)
	{
		cin >> s;
		len = s.length();
		//cout << "len=" << len << endl;
		for(i=0; i<len; i++)
		{
			if(s[i]>='0' && s[i]<='9')
			{
				a = EnterQueue(q, s[i]);
				if(!a)
					cout << "队已满，无法再入队" << endl;
				else
					cout << "元素" << s[i] << "已入队" <<endl;
			}
			else if(s[i]>='a' && s[i]<='z')
			{
				b = ExitQueue(q, e);
				if(!b)
					cout << "队已空，无法再出队" << endl;
				else
					cout << "元素" << e << "已出队" <<endl;
			}
			else
			{
				q->count = 0;
				q->front = 0;
				cout << "遇见结束字符，已销毁本队列" << endl;
				break;
			}
			//cout << "q->count="  << q->count << endl;
		}
		cout << endl;
	}

	return 0;
}