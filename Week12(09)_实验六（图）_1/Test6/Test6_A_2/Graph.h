#pragma once

#include <malloc.h>
#include <iostream>
#include <cstdio>

#ifndef MAX_V
#define MAX_V
const int Max = 100;
#endif

#ifndef GRAPH_H
#define GRAPH_H

typedef int InfoType;
const int MAXV=100;				//��󶥵����
const int INF=32767;				//INF��ʾ��

typedef struct
{
	int no;
	InfoType info;
}VertesType;

//���¶����ڽӾ�������
typedef struct 
{  	int no;						//������
	InfoType info;				//����������Ϣ
} VertexType;					//��������

typedef struct  				//ͼ�Ķ���
{  	int edges[MAXV][MAXV]; 		//�ڽӾ���
   	int n,e;   					//������������
	VertexType vexs[MAXV];		//��Ŷ�����Ϣ
} MatGraph;						//ͼ���ڽӾ�������

//���¶����ڽӱ�����
typedef struct ANode           	//�ߵĽڵ�ṹ����
{	int adjvex;              	//�ñߵ��յ�λ��
   	struct ANode *nextarc; 		//ָ����һ���ߵ�ָ��
   	InfoType weight;			//�ñߵ������Ϣ,�������ڴ��Ȩֵ
} ArcNode;

typedef int Vertex;
typedef struct Vnode      		//�ڽӱ�ͷ�ڵ������
{	Vertex data;            	//������Ϣ
    ArcNode *firstarc;     		//ָ���һ����
} VNode;

typedef VNode AdjList[MAXV];	//AdjList���ڽӱ�����

typedef struct
{	AdjList adjlist;         	//�ڽӱ�
    int n,e;                 	//ͼ�ж�����n�ͱ���e
} AdjGraph;                   	//ͼ���ڽӱ�����

void CreateAdj(AdjGraph *&G, int A[MAXV][MAXV], int n, int e);
void DispAdj(AdjGraph *G);
void DispMat(MatGraph g);
void DestroyAdj(AdjGraph *&G);
void MatToList(MatGraph g, AdjGraph *&G);
void ListToMat(AdjGraph *G, MatGraph &g);

void DFS(AdjGraph *G, int v);
void BFS(AdjGraph *G, int v);


#endif