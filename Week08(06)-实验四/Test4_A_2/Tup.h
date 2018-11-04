#include <iostream>

using std::cout;
using std::endl;

#define M 4
#define N 4

#define ElemType int

#define MaxSize M*N

typedef struct node
{
	int row;
	int column;
	ElemType value;
}TupleNode;//��Ԫ������

typedef struct tuple
{
	int rows;
	int columns;
	int number;	//����
	TupleNode data[MaxSize];
}MatrixSequenceTuple;//�ɾ��󴴽���˳����Ԫ��

void CreateMatrixTuple(MatrixSequenceTuple &t, ElemType A[M][N]);
void DisplayMatrixTuple(MatrixSequenceTuple t);
bool MatrixTupleAdd(MatrixSequenceTuple ta, MatrixSequenceTuple tb, MatrixSequenceTuple &tc);