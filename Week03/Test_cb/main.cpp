#include "LinkStack.cpp"

int main(int argc, char* argv[])
{
	LinkStack *s;
	ElemType e;
	cout << "��ջs�Ļ����������£�" <<endl;

	cout << "1.��ʼ����ջs" <<endl;
	Init(s);

	cout << "2.ջΪ" << (IsEmpty(s) ? "��" : "�ǿ�") << endl;

	cout << "3.���ν�ջԪ��a b c d f" <<endl;
	ElemType datas[] = {'a', 'b', 'c', 'd', 'f'};
	int n = sizeof(datas)/sizeof(datas[0]);
	for(int i = 0; i<n; i++)
		Push(s,datas[i]);

	cout << "4.ջΪ" << (IsEmpty(s) ? "��" : "�ǿ�") <<endl;

	GetTop(s,e);
	cout << "5.ջ��Ԫ��Ϊ" << e <<endl;

	cout << "6.��ջ����:";
	while(Pop(s,e))
		cout << e << ' ';
	cout << endl;

	cout << "7.ջΪ" << (IsEmpty(s) ? "��" : "�ǿ�") << endl;

	cout << "8.�ͷ�ջ" << endl;
	Destroy(s);

	return 0;
}
