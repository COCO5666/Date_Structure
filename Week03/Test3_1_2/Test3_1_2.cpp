#include "stdafx.h"
#include "SqStack.h"

int main(int argc, char* argv[])
{
	SqStack *s;
	ElemType e;
	cout << "顺序栈s的基本运算如下：" <<endl;

	cout << "1.初始化栈s" <<endl;
	InitStack(s);

	cout << "2.栈为" << (IsEmpty(s) ? "空" : "非空") <<endl;
	
	cout << "3.依次进栈元素a,b,c,d,f" <<endl;
	ElemType datas[] = {'a', 'b', 'c', 'd', 'f'};
	int n = sizeof(datas) / sizeof(datas[0]);
	for(int i=0; i<n; i++)
	{
		if(!Push(s,datas[i]))
			cout << "无法将" << datas[i] << "压入栈，因为当前栈已满" <<endl;
	}

	cout << "4.栈为" << (IsEmpty(s) ? "空" : "非空") << endl;

	cout << "5.";
	(GetTop(s,e) ? cout <<"栈顶元素为" << e : cout << "当前栈为空，无法取出栈顶元素") <<endl; 

	cout << "6.出栈序列为：";
	for(i=0; i<5; i++)
	{
		Pop(s,e);
		cout << e << ' ';
	}
	cout << endl;

	cout << "7.栈为：" << (IsEmpty(s) ? "空" : "非空") << endl;

	cout << "8.释放栈" << endl;
	Destroy(s);

	return 0;
}