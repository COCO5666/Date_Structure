//�ļ���:exp7-6.cpp
#include <stdio.h>
#include <string.h>
#define N 50		//Ҷ�ӽڵ���
#define M 2*N-1		//���нڵ�����

typedef struct
{
	char data[5];	//�ڵ�ֵ
	int weight;		//Ȩ��
	int parent;		//˫�׽ڵ�
	int lchild;		//���ӽڵ�
	int rchild;		//�Һ��ӽڵ�
} HTNode;

typedef struct
{
	char cd[N];		//��Ź�������
	int start;
} HCode;

void CreateHT(HTNode ht[], int n);
void CreateHCode(HTNode ht[], HCode hcde[], int n);
void DispHCode(HTNode ht[], HCode hcd[], int n);