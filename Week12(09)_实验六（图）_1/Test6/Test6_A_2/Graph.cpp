#include "Graph.h"
#include "SqQueue.h"

int visited[Max] = { 0 };

void CreateAdj(AdjGraph *&G, int A[MAXV][MAXV], int n, int e)
{
	int i,j;
	ArcNode *p;
	G = (AdjGraph *)malloc(sizeof(AdjGraph));
	for(i=0; i<n; i++)
		G->adjlist[i].firstarc=NULL;
	for(i=0; i<n; i++)
		for(j=n-1; j>=0; j--)
			if(A[i][j]!=0 && A[i][j]!=INF)
			{
				p = (ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex = j;
				p->weight = A[i][j];
				p->nextarc = G->adjlist[i].firstarc;
				G->adjlist[i].firstarc = p;
			}
	G->n = n; G->e = e;
}

void DispAdj(AdjGraph *G)
{
	int i;
	ArcNode *p;
	for(i=0; i<G->n; i++)
	{
		p=G->adjlist[i].firstarc;
		printf("%3d: ", i);
		while(p!=NULL)
		{
			printf("%3d[%d]->", p->adjvex, p->weight);
			p=p->nextarc;
		}
		printf("^\n");
	}
}

void DispMat(MatGraph g)
{
	int i,j;
	for(i=0; i<g.n; i++)
	{
		for(j=0; j<g.n; j++)
		{
			if(g.edges[i][j]==INF)
				printf("%3s", "¡Þ");
			else
				printf("%3d", g.edges[i][j]);
		}
		printf("\n");
	}
}

void DestroyAdj(AdjGraph *&G)
{
	int i;
	ArcNode *pre, *p;
	for(i=0; i<G->n; i++)
	{
		pre = G->adjlist[i].firstarc;
		if(pre!=NULL)
		{
			p=pre->nextarc;
			while(p!=NULL)
			{
				free(pre);
				pre = p;
				p = p->nextarc;
			}
			free(pre);
		}
	}
	free(G);
}

void MatToList(MatGraph g, AdjGraph *&G)
{
	int i,j;
	ArcNode *p;
	G=(AdjGraph *)malloc(sizeof(AdjGraph));
	for(i=0; i<g.n; i++)
		G->adjlist[i].firstarc = NULL;
	for(i=0; i<g.n; i++)
		for(j=g.n-1; j>=0; j--)
			if(g.edges[i][j]!=0&&g.edges[i][j]!=INF)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex=j;
				p->weight = g.edges[i][j];
				p->nextarc = G->adjlist[i].firstarc;
				G->adjlist[i].firstarc = p;
			}
			G->n = g.n;
			G->e = g.e;
}

void ListToMat(AdjGraph *G, MatGraph &g)
{
	int i,j;
	ArcNode *p;
	for(i=0; i<G->n; i++)
		for(j=0; j<G->n; j++)
			if(i==j)
				g.edges[i][j]=0;
			else
				g.edges[i][j]=INF;
	for(i=0; i<G->n; i++)
	{
		p=G->adjlist[i].firstarc;
		while(p!=NULL)
		{
			g.edges[i][p->adjvex] = p->weight;
			p = p->nextarc;
		}
	}
	g.n = G->n;
	g.e = G->e;
}

void DFS(AdjGraph *G, int v)
{
	ArcNode *p;
	visited[v] = 1;
	printf("%d ", v);
	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		if(visited[p->adjvex]==0)
		{
			DFS(G, p->adjvex);
		}
		p=p->nextarc;
	}
}
void BFS(AdjGraph *G, int v)
{
	int w,i;
	ArcNode *p;
	SqQueue *qu;
	InitQueue(qu);
	for(i=0; i<G->n; i++)
	{
		visited[i]=0;
	}
	printf("%2d", v);
	visited[v] = 1;
	enQueue(qu, v);
	while(!QueueEmpty(qu))
	{
		deQueue(qu, w);
		p=G->adjlist[w].firstarc;
		while(p!=NULL)
		{
			if(visited[p->adjvex]==0)
			{
				printf("%2d", p->adjvex);
				visited[p->adjvex]=1;
				enQueue(qu, p->adjvex);
			}
			p=p->nextarc;
		}
	}
	printf("\n");
}