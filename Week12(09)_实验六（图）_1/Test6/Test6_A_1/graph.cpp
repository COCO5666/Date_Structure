#include <stdio.h>
#include <malloc.h>
#include "graph.h"

void DispMat1(MGraph g)
{
	int i, j;
	for (i = 0; i < g.n; i++)
	{
		for (j = 0; j < g.n; j++)
			if (g.edges[i][j] == INF)
				printf("%3s", "∞");
			else
				printf("%3d", g.edges[i][j]);
		printf("\n");
	}
}

void MatToList1(MGraph g, ALGraph *&G)
{
	int i, j;
	ArcNode *p;
	G = (ALGraph *)malloc(sizeof(ALGraph));
	for (i = 0; i < g.n; i++)					//给邻接表中所有头节点的指针域置初值
		G->adjlist[i].firstarc = NULL;
	for (i = 0; i < g.n; i++)					//检查邻接矩阵中每个元素
		for (j = g.n - 1; j >= 0; j--)
			if (g.edges[i][j] != 0 && g.edges[i][j] != INF)	//存在一条边
			{
				p = (ArcNode *)malloc(sizeof(ArcNode));	//创建一个节点*p
				p->adjvex = j;
				p->info = g.edges[i][j];
				p->nextarc = G->adjlist[i].firstarc;		//将*p链到链表后
				G->adjlist[i].firstarc = p;
			}
	G->n = g.n; G->e = g.e;
}

void DispAdj1(ALGraph *G)
//输出邻接表G
{
	int i;
	ArcNode *p;
	for (i = 0; i < G->n; i++)
	{
		p = G->adjlist[i].firstarc;
		printf("%3d: ", i);
		while (p != NULL)
		{
			printf("%3d(%d)", p->adjvex, p->info);
			p = p->nextarc;
		}
		printf("\n");
	}
}