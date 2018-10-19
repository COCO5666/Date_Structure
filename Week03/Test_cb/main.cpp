#include "LinkStack.cpp"

int main(int argc, char* argv[])
{
	LinkStack *s;
	ElemType e;
	cout << "链栈s的基本运算如下：" <<endl;

	cout << "1.初始化链栈s" <<endl;
	Init(s);

	cout << "2.栈为" << (IsEmpty(s) ? "空" : "非空") << endl;

	cout << "3.依次进栈元素a b c d f" <<endl;
	ElemType datas[] = {'a', 'b', 'c', 'd', 'f'};
	int n = sizeof(datas)/sizeof(datas[0]);
	for(int i = 0; i<n; i++)
		Push(s,datas[i]);

	cout << "4.栈为" << (IsEmpty(s) ? "空" : "非空") <<endl;

	GetTop(s,e);
	cout << "5.栈顶元素为" << e <<endl;

	cout << "6.出栈序列:";
	while(Pop(s,e))
		cout << e << ' ';
	cout << endl;

	cout << "7.栈为" << (IsEmpty(s) ? "空" : "非空") << endl;

	cout << "8.释放栈" << endl;
	Destroy(s);

	return 0;
}
