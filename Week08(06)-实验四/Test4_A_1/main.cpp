#include "SparseMatrix.h"

int main()
{
	TSMatrix t,tb;

	int A[4][4]={
		{1, 0, 3, 0},
		{0, 1, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1}
	};

	int B[4][4]={
		{3, 0, 0, 0},
		{0, 4, 0, 0},
		{0, 0, 1, 2},
		{0, 0, 0, 2}
	};

	CreateMat(t, A);
	CreateMat(tb, B);
	cout << "a的三元组:" << endl;
	DIspMat(t);
	cout << "b的三元组:" << endl;
	DIspMat(tb);
}