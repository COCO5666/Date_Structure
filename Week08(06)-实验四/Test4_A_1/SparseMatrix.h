#include <iostream>

#define M 4
#define N 4
#define MaxSize M*N

using std::cout;
using std::endl;

typedef int ElemType;
typedef struct
{
	int r;
	int c;
	ElemType d;
}TupNode;

typedef struct
{
	int rows;
	int cols;
	int nums;
	TupNode data[MaxSize];
}TSMatrix;

void CreateMat(TSMatrix &t, ElemType A[M][N]);
bool Value(TSMatrix &t, ElemType x, int i, int j);
bool Assign(TSMatrix t, ElemType &x, int i, int j);
void DIspMat(TSMatrix t);
