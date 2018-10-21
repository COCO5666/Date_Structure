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
					cout << "���������޷������" << endl;
				else
					cout << "Ԫ��" << s[i] << "�����" <<endl;
			}
			else if(s[i]>='a' && s[i]<='z')
			{
				b = ExitQueue(q, e);
				if(!b)
					cout << "���ѿգ��޷��ٳ���" << endl;
				else
					cout << "Ԫ��" << e << "�ѳ���" <<endl;
			}
			else
			{
				q->count = 0;
				q->front = 0;
				cout << "���������ַ��������ٱ�����" << endl;
				break;
			}
			//cout << "q->count="  << q->count << endl;
		}
		cout << endl;
	}

	return 0;
}