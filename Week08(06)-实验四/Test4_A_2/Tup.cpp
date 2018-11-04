#include "Tup.h"

void CreateMatrixTuple(MatrixSequenceTuple &t, ElemType A[M][N])
{
	int i, j;
	t.rows = M;
	t.columns = N;
	t.number = 0;
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			if(A[i][j]!=0)
			{
				t.data[t.number].row = i;
				t.data[t.number].column = j;
				t.data[t.number].value = A[i][j];
				t.number++;
			}
		}
	}
}

void DisplayMatrixTuple(MatrixSequenceTuple t)
{
	if(t.number == 0)
		return;
	cout << '\t' << t.rows << '\t' << t.columns << '\t' << t.number << endl;
	cout << '\t' << "-----------------" << endl;
	int i;
	for(i=0; i<t.number; i++)
	{
		cout << '\t' << t.data[i].row << '\t' << t.data[i].column<< '\t' << t.data[i].value << endl;
	}
}

bool MatrixTupleAdd(MatrixSequenceTuple ta, MatrixSequenceTuple tb, MatrixSequenceTuple &tc)
{
	if(ta.rows!=tb.rows || ta.columns!=tb.columns)
		return false;
	tc.rows = ta.rows;
	tc.columns = ta.columns;
	tc.number = 0;
	int i=0, j=0, v;
	while(i<ta.number && j<tb.number)
	{
		if(ta.data[i].row == tb.data[j].row)
		{
			if(ta.data[i].column == tb.data[j].column)
			{
				v = ta.data[i].value + tb.data[j].value;
				if(v != 0)
				{
					tc.data[tc.number].row = ta.data[i].row;
					tc.data[tc.number].column = ta.data[i].column;
					tc.data[tc.number++].value = v;
				}
				i++; j++;
			}
			else if(ta.data[i].column < tb.data[j].column)
			{
				tc.data[tc.number].row = ta.data[i].row;
				tc.data[tc.number].column = ta.data[i].column;
				tc.data[tc.number++].value = ta.data[i++].value;
			}
			else
			{
				tc.data[tc.number].row = tb.data[j].row;
				tc.data[tc.number].column = tb.data[j].column;
				tc.data[tc.number++].value = tb.data[j++].value;
			}
		}
		else if(ta.data[i].row < tb.data[j].row)
		{
			tc.data[tc.number].row = ta.data[i].row;
			tc.data[tc.number].column = ta.data[i].column;
			tc.data[tc.number++].value = ta.data[i++].value;
		}
		else
		{
			tc.data[tc.number].row = tb.data[j].row;
			tc.data[tc.number].column = tb.data[j].column;
			tc.data[tc.number++].value = tb.data[j++].value;
		}
	}
	return true;
}
