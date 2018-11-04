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
}TupleNode;//三元组数据

typedef struct tuple
{
	int rows;
	int columns;
	int number;	//数量
	TupleNode data[MaxSize];
}MatrixSequenceTuple;//由矩阵创建的顺序三元组

void CreateMatrixTuple(MatrixSequenceTuple &t, ElemType A[M][N]);
void DisplayMatrixTuple(MatrixSequenceTuple t);
bool MatrixTupleAdd(MatrixSequenceTuple ta, MatrixSequenceTuple tb, MatrixSequenceTuple &tc);