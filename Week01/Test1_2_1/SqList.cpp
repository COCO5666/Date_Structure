#include <iostream>

#define ElemType char

const int ElemNumMax=50;

using namespace std;
using std::cout;

typedef struct
{
    ElemType data[ElemNumMax];
    int length=0;
}SqList;

void CreateSqList(SqList *&L, ElemType a[], int n)//����˳���
{
    for(int i=0; i<n; i++)
    {
        L->data[i] = a[i];
    }
    L->length = n;
}

void DispSqList(SqList *L)//��ӡ˳����е�Ԫ��
{
    for(int i=0; i<L->length; i++)
    {
        cout<<L->data[i]<<' ';
    }
    cout<<endl;
}

int GetLength(SqList *L)//����˳���ĳ���
{
    return L->length;
}

bool GetElem(SqList *L, int location, ElemType &e)//Ѱ��λ��Ϊlocation��Ԫ�ص�ֵ������ֵ������e��
{
    location--;//���߼����ת�����������
    if(location<0||location>=L->length)
        return false;
    e = L->data[location];
    return true;
}

int GetLocation(SqList *L, ElemType e)//Ѱ��Ԫ��e��λ����ţ�������λ����ŷ���
{
    for(int i=0;i<L->length;i++)
    {
        if(e==L->data[i])
        {
            i++;//���������ת�����߼����
            return i;
        }
    }
    return 0;
}

bool InsertElem(SqList *&L, ElemType e, int location)//��λ�����Ϊlocation��Ԫ��ǰ����e
{
    location--;//���߼����ת�����������
    if(location<0||location>L->length)
        return false;
    for(int i=L->length; i>location; i--)
    {
        L->data[i]=L->data[i-1];
    }
    L->data[location] = e;
    L->length++;
    return true;
}

bool DelElem(SqList *&L, int location, ElemType &e)//�ȱ���λ�����Ϊlocation��Ԫ�ص�ֵ��e������ɾ����Ԫ��
{
    location--;
    if(location<0||location>=L->length)
        return false;
    e = L->data[location];
    int ElemEnd = L->length-1;
    for(int i=location;i<ElemEnd;i++)
    {
        L->data[i]=L->data[i+1];
    }
    L->length--;
    return true;
}

