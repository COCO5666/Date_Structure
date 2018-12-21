#include <stdio.h>
#include <malloc.h>
#include "graph.h"

void main()
{
	int i,j;
	MatGraph g;
	AdjGraph *G;
	int A[MAXV][6]={
		{0,5,INF,7,INF,INF},
		{INF,0,4,INF,INF,INF},
		{8,INF,0,INF,INF,9},
		{INF,INF,5,0,INF,6},
		{INF,INF,INF,5,0,INF},
		{3,INF,INF,INF,1,0}};
	g.n=6;g.e=10;			//建立实验6(2)讲义中，有向带权图G的邻接矩阵
	for (i=0;i<g.n;i++)	
		for (j=0;j<g.n;j++)
			g.edges[i][j]=A[i][j];

	G=(AdjGraph *)malloc(sizeof(AdjGraph));
	MatToList(g,G);					//图G的邻接矩阵转换成邻接表
	printf("图G的邻接表:\n");
	DispAdj(G);
	printf("从顶点0开始的DFS(递归算法):\n");
	//DFS(G,0);printf("\n");
	printf("从顶点0开始的DFS(非递归算法):\n");
	//DFS1(G,0);
	printf("从顶点0开始的BFS(非递归算法):\n");
	//BFS(G,0);printf("\n");

	char a[5] = {0};
	for (i=0; i<5; i++)
	{
		//printf("%d\n", a[i]);
	}
}
