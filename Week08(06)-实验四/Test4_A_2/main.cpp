#include "Tup.h"

int main()
{
	MatrixSequenceTuple ta, tb, tc;

	int A[4][4] = {
		{1, 0, 3, 0},
		{0, 1, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 1}
	};

	int B[4][4] = {
		{3, 0, 0, 0},
		{0, 4, 0, 0},
		{0, 0, 1, 2},
		{0, 0, 0, 2}
	};

	CreateMatrixTuple(ta, A);
	cout << "a����Ԫ�飺" << endl;
	DisplayMatrixTuple(ta);

	cout << endl;
	CreateMatrixTuple(tb, B);
	cout << "b����Ԫ�飺" << endl;
	DisplayMatrixTuple(tb);

	cout << endl;
	MatrixTupleAdd(ta, tb, tc);
	cout << "c = a+b��c����Ԫ��Ϊ��" << endl;
	DisplayMatrixTuple(tc);
}