#include "stdafx.h"
#include "SqStack.h"

int main(int argc, char* argv[])
{
	SqStack *s;
	ElemType e;
	cout << "˳��ջs�Ļ����������£�" <<endl;

	cout << "1.��ʼ��ջs" <<endl;
	InitStack(s);

	cout << "2.ջΪ" << (IsEmpty(s) ? "��" : "�ǿ�") <<endl;
	
	cout << "3.���ν�ջԪ��a,b,c,d,f" <<endl;
	ElemType datas[] = {'a', 'b', 'c', 'd', 'f'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		if(!Push(s,datas[i]))
			cout << "�޷���" << datas[i] << "ѹ��ջ����Ϊ��ǰջ����" <<endl;
	}

	cout << "4.ջΪ" << (IsEmpty(s) ? "��" : "�ǿ�") << endl;

	cout << "5.";
	(GetTop(s,e) ? cout <<"ջ��Ԫ��Ϊ" << e : cout << "��ǰջΪ�գ��޷�ȡ��ջ��Ԫ��") <<endl; 

	cout << "6.��ջ����Ϊ��";
	for(i=0; i<5; i++)
	{
		Pop(s,e);
		cout << e << ' ';
	}
	cout << endl;

	cout << "7.ջΪ��" << (IsEmpty(s) ? "��" : "�ǿ�") << endl;

	cout << "8.�ͷ�ջ" << endl;
	Destroy(s);

	return 0;
}