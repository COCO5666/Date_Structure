#include <stdio.h>
#include <string.h>

#define N 50		//Ҷ�ӽ����
#define M 2*N-1		//���н������

typedef struct
{
	char data[5];	 //���ֵ
	int weight;	     //Ȩ��
	int parent;		//˫�׽��
	int lchild;		//���ӽ��
	int rchild;		//�Һ��ӽ��
} HTNode;

typedef struct
{
	char cd[N];		//��Ź�������
	int start;
} HCode;

void CreateHT(HTNode ht[], int n);
void CreateHCode(HTNode ht[], HCode hcd[], int n);
void DispHCode(HTNode ht[], HCode hcd[], int n);
