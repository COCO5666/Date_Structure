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
	g.n=6;g.e=10;			//����ʵ��6(2)�����У������ȨͼG���ڽӾ���
	for (i=0;i<g.n;i++)	
		for (j=0;j<g.n;j++)
			g.edges[i][j]=A[i][j];

	G=(AdjGraph *)malloc(sizeof(AdjGraph));
	MatToList(g,G);					//ͼG���ڽӾ���ת�����ڽӱ�
	printf("ͼG���ڽӱ�:\n");
	DispAdj(G);
	printf("�Ӷ���0��ʼ��DFS(�ݹ��㷨):\n");
	//DFS(G,0);printf("\n");
	printf("�Ӷ���0��ʼ��DFS(�ǵݹ��㷨):\n");
	//DFS1(G,0);
	printf("�Ӷ���0��ʼ��BFS(�ǵݹ��㷨):\n");
	//BFS(G,0);printf("\n");

	char a[5] = {0};
	for (i=0; i<5; i++)
	{
		//printf("%d\n", a[i]);
	}
}
