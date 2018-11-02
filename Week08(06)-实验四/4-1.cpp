
#include "tup.h"
void main()
{
	ElemType a[M][N]={{1,0,3,0},{0,1,0,0},{0,0,1,0},{0,0,1,1}};
	ElemType b[M][N]={{3,0,0,0},{0,4,0,0},{0,0,1,2},{0,0,0,2}};
	TSMatrix x,y;
	CreatMat(x,a);
	CreatMat(y,b);
	printf("a的三元组:\n");DispMat(x);
	printf("b的三元组:\n");DispMat(y);

}