#include "graph.h"

int main()
{
	int i,j;
	MatGraph g, g1;
	AdjGraph *G;
	InfoType A[MAXV][6] =
	{
		{0, 5, INF, 7, INF, INF},
		{INF, 0, 4, INF, INF, INF},
		{8, INF, 0, INF, INF, 9},
		{INF, INF, 5, 0, INF, 6},
		{INF, INF, INF, 5, 0, INF},
		{3, INF, INF, INF, 1, 0}
	
	};
	g.n = 6;
	g.e = 10;
	for(i=0; i<g.n; i++)
		for(j=0; j<g.n; j++)
			g.edges[i][j] = A[i][j];
	printf("有向图G的邻接矩阵：\n");
	DispMat(g);
	G = (AdjGraph *)malloc(sizeof(AdjGraph));
	printf("图G的邻接矩阵转换成邻接表：\n");
	MatToList(g, G);
	DispAdj(G);

	return 0;
}