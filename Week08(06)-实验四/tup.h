#include <stdio.h>
#define M 4
#define N 4
#define MaxSize  100         //�����з���Ԫ��������
typedef int ElemType;
typedef struct
{
	int r;					//�к�
	int c;					//�к�
	ElemType d;				//Ԫ��ֵ
} TupNode;					//��Ԫ�鶨��
typedef struct 
{	
	int rows;				//����
	int cols;				//����
	int nums;				//����Ԫ�ظ���
	TupNode data[MaxSize];
} TSMatrix;					//��Ԫ��˳�����

void CreatMat(TSMatrix &t,ElemType A[M][N])  //��һ����άϡ����󴴽�����Ԫ���ʾ
{
	int i,j;
	t.rows=M;t.cols=N;t.nums=0;
	for (i=0;i<M;i++)
	{
		for (j=0;j<N;j++) 
			if (A[i][j]!=0) 	//ֻ�洢����Ԫ��
			{
				t.data[t.nums].r=i;t.data[t.nums].c=j;
				t.data[t.nums].d=A[i][j];t.nums++;
			}
	}
}


void DispMat(TSMatrix t)		//�����Ԫ��
{
	int i;
	if (t.nums<=0)			//û�з���Ԫ��ʱ����
		return;
	printf("\t%d\t%d\t%d\n",t.rows,t.cols,t.nums);
	printf("\t------------------\n");
	for (i=0;i<t.nums;i++)
		printf("\t%d\t%d\t%d\n",t.data[i].r,t.data[i].c,t.data[i].d);
}

