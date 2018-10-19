#include <iostream>

#include "SqStack.cpp"

using namespace std;

int main()
{
    ElemType e;
    SqStack *s;

    cout << "˳��ջs�Ļ����������£�" << endl;

    cout << "1.��ʼ��ջs" <<endl;
    InitStack(s);

    cout << "2.ջΪ" << (StackEmpty(s) ? "��" : "�ǿ�") <<endl;

    cout << "3.���ν�ջԪ�أ�";
    ElemType a[] = {'a', 'b', 'c', 'd', 'f'};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<n; i++)
    {
        if(!Push(s,a[i]))
        {
            cout << "ջ�������޷�����ѹջ";
            break;
        }
        cout << a[i] << ' ';
    }
    cout << endl;

    cout << "4.ջΪ" << (StackEmpty(s) ? "��" : "�ǿ�") <<endl;

    cout << "5.";
    if(GetTop(s,e))
        cout << "ջ��Ԫ��Ϊ" << e;
    else
        cout << "��ջΪ��ջ����ջ��Ԫ��";
    cout<<endl;

    cout << "6.��ջ���У�";
    while(Pop(s,e))
    {
        cout << e << ' ';
    }
    cout << endl;

    cout << "7.ջΪ" << (StackEmpty(s) ? "��" : "�ǿ�") <<endl;

    cout << "8.�ͷ�ջ" << endl;
    DestroyStack(s);

    //cout << "Hello world!" << endl;
    return 0;
}
