#include "pch.h"

#include <stdio.h>
#include <iostream>
using namespace std;

#ifndef MAXL
const int MAXL = 100;
#endif

typedef int KeyType;
typedef char InfoType[10];
typedef struct
{
    KeyType key;
    InfoType data;
}NodeType;
typedef NodeType SeqList[MAXL];

int SeqSearch(SeqList R, int n, KeyType k);

int main()
{
	SeqList R;
	int n=10,i;
	KeyType k;
	int a[]={3,6,2,10,1,8,5,7,4,9};
	for (i=0;i<n;i++)				//����˳���
		R[i].key=a[i];
	printf("�ؼ�������:");
	for (i=0;i<n;i++)
		printf("%d ",R[i].key);
	printf("\n\n");

	k=5;
	printf("����%d���ȽϵĹؼ���:\n\t",k);
	if ((i=SeqSearch(R,n,k))!=0)
		printf("\nԪ��%d��λ����%d\n",k,i);
	else
		printf("\nԪ��%d���ڱ���\n",k);
	printf("\n");

	k=11;
	printf("����%d���ȽϵĹؼ���:\n\t",k);
	if ((i=SeqSearch(R,n,k))!=0)
		printf("\nԪ��%d��λ����%d\n",k,i);
	else
		printf("\nԪ��%d���ڱ���\n",k);
	printf("\n");
}

int SeqSearch(SeqList R, int n, KeyType k) //˳������㷨
{
    int i=0;
    while (i<n && R[i].key!=k)
	{
		printf("%d ",R[i].key);
		i++;					//�ӱ�ͷ������
	}
    if (i>=n)
		return 0;
    else
	{
		printf("%d",R[i].key);
		return i+1;
	}
}
