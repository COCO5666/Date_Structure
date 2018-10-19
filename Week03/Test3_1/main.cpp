#include <iostream>

#include "SqStack.cpp"

using namespace std;

int main()
{
    ElemType e;
    SqStack *s;

    cout << "顺序栈s的基本运算如下：" << endl;

    cout << "1.初始化栈s" <<endl;
    InitStack(s);

    cout << "2.栈为" << (StackEmpty(s) ? "空" : "非空") <<endl;

    cout << "3.依次进栈元素：";
    ElemType a[] = {'a', 'b', 'c', 'd', 'f'};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<n; i++)
    {
        if(!Push(s,a[i]))
        {
            cout << "栈已满，无法继续压栈";
            break;
        }
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "4.栈为" << (StackEmpty(s) ? "空" : "非空") <<endl;

    cout << "5.";
    if(GetTop(s,e))
        cout << "栈顶元素为" << e;
    else
        cout << "此栈为空栈，无栈顶元素";
    cout<<endl;

    cout << "6.出栈序列：";
    while(Pop(s,e))
    {
        cout << e << ' ';
    }
    cout << endl;

    cout << "7.栈为" << (StackEmpty(s) ? "空" : "非空") <<endl;

    cout << "8.释放栈" << endl;
    DestroyStack(s);

    //cout << "Hello world!" << endl;
    return 0;
}
