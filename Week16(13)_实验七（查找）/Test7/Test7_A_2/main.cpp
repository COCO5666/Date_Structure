#include "pch.h"

#include <cstdio>
#include <iostream>
using namespace std;

#ifndef MAXL
#define MAXL 100
#endif

typedef int KeyType;
typedef char InfoType[10];
typedef struct
{
    KeyType key;
    InfoType data;

}NodeType;
typedef NodeType SeqList[MAXL];

int BinSearch(SeqList R,int n,KeyType k);

int main()
{
	SeqList R;
	KeyType k;
	int a[]={1,2,3,4,5,6,7,8,9,10},i,n=10;
	for (i=0;i<n;i++)				//����˳���
		R[i].key=a[i];
	printf("�ؼ�������:");
	for (i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n\n");

	k=9;
	printf("����%d�ıȽϹ�������:\n",k);
	if ((i=BinSearch(R,n,k))!=0)
		printf("Ԫ��%d��λ����%d\n",k,i);
	else
		printf("Ԫ��%d���ڱ���\n",k);
    cout << endl;

    k=11;
	printf("����%d�ıȽϹ�������:\n",k);
	if ((i=BinSearch(R,n,k))!=0)
		printf("Ԫ��%d��λ����%d\n",k,i);
	else
		printf("Ԫ��%d���ڱ���\n",k);
    cout << endl;
}

int BinSearch(SeqList R,int n,KeyType k)	//���ֲ����㷨
{
	int low=0, high=n-1, mid, cnt=0;
	while (low <= high)
	{
		mid = (low+high)/2;
		printf("\t��%d�αȽ�:��[%d,%d]�бȽ�Ԫ��R[%d]:%d\n", ++cnt, low, high, mid, R[mid].key);
			if (R[mid].key==k)   	//���ҳɹ�����
			return mid+1;
		if (R[mid].key>k)     	//������R[low..mid-1]�в���
			high=mid-1;
		else
			low=mid+1;       	//������R[mid+1..high]�в���
	}
	return 0;
}
