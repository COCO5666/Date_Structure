#include <stdio.h>
#include <malloc.h>

#include <iostream>
using namespace std;

#include "graph.h"

void main()
{
	int i,j;
	MGraph g,g1;
	ALGraph *G;
	int A[MAXV][6]={
		{0,5,INF,7,INF,INF},
		{INF,0,4,INF,INF,INF},
		{8,INF,0,INF,INF,9},
		{INF,INF,5,0,INF,6},
		{INF,INF,INF,5,0,INF},
		{3,INF,INF,INF,1,0}};
	g.n=6;g.e=10;			//����ʵ�齲���е������ȨͼG���ڽӾ���
	for (i=0;i<g.n;i++)	
		for (j=0;j<g.n;j++)
			g.edges[i][j]=A[i][j];
	printf("����ͼG���ڽӾ���:\n");
	DispMat1(g);

	cout << endl;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	printf("ͼG���ڽӾ���ת�����ڽӱ�:\n");
	MatToList1(g,G);
	DispAdj1(G);
}