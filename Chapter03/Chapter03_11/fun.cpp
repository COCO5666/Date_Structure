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
				cout << "���������޷������" << endl;
			else
				cout << "Ԫ��" << ch << "�����" <<endl;
		}
		else if(ch>='a' && ch<='z')
		{
			if(!ExitQueue(q, e))
				cout << "���ѿգ��޷��ٳ���" << endl;
			else
				cout << "Ԫ��" << e << "�ѳ���" <<endl;
		}
		else
		{
			Destroy(q);
			cout << "���������ַ��������ٱ�����" << endl;
			break;
		}
		cout << endl;
	}
}