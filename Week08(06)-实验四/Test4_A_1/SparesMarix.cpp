#include "SparseMatrix.h"

void CreateMat(TSMatrix &t, ElemType A[M][N])
{
	int i,j;
	t.rows = M;
	t.cols = N;
	t.nums = 0;
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			if(A[i][j] != 0)
			{
				t.data[t.nums].r = i;
				t.data[t.nums].c = j;
				t.data[t.nums].d = A[i][j];
				t.nums++;
			}
		}
	}
}

bool Value(TSMatrix &t, ElemType x, int i, int j)
{
	int k=0, kl;
	if(i>=t.rows || j>=t.cols)
		return false;
	while(k<t.nums && i>t.data[k].r)k++;
	while(k<t.nums && i==t.data[k].r && j>t.data[k].c)k++;
	if(t.data[k].r==i && t.data[k].c==j)
		t.data[k].d = x;
	else
	{
		for(kl=t.nums-1; kl>=k; kl--)
		{
			t.data[kl+1].r = t.data[kl].r;
			t.data[kl+1].c=t.data[kl].c;
			t.data[kl+1].d=t.data[kl].d;
		}
		t.data[k].r = i;
		t.data[k].c = j;
		t.data[k].d = x;
		t.nums++;
	}
	return true;
}

bool Assign(TSMatrix t, ElemType &x, int i, int j)
{
	int k=0;
	if(i>=t.rows || i>=t.cols)
		return false;
	while(k<t.nums && i>t.data[k].r)k++;
	while(k<t.nums && i==t.data[k].r && j>t.data[k].c)k++;
	if(t.data[k].r==i && t.data[k].c==j)
		x=t.data[k].d;
	else
		x=0;
	return true;
}

void DIspMat(TSMatrix t)
{
	int k;
	if(t.nums <=0)
		return;
	cout << '\t' << t.rows << '\t' << t.cols << '\t' << t.nums << endl;
	cout << "\t-----------------" << endl;
	for(k=0; k<t.nums; k++)
		cout << '\t' << t.data[k].r << '\t' << t.data[k].c << '\t' << t.data[k].d << endl;
}
