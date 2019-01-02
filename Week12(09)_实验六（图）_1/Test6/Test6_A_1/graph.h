#pragma once

typedef int InfoType;
const int MAXV = 100;				//��󶥵����
const int INF = 32767;				//INF��ʾ��

//���¶����ڽӾ�������
typedef struct
{  	int no;						//������
	InfoType info;				//����������Ϣ
} VertexType;					//��������

typedef struct  				//ͼ�Ķ���
{  	int edges[MAXV][MAXV]; 		//�ڽӾ���
   	int n,e;   					//������������
	VertexType vexs[MAXV];		//��Ŷ�����Ϣ
} MGraph;						//ͼ���ڽӾ�������


//���¶����ڽӱ�����
typedef struct ANode           	//�ߵĽڵ�ṹ����
{	int adjvex;              	//�ñߵ��յ�λ��
   	struct ANode *nextarc; 		//ָ����һ���ߵ�ָ��
   	InfoType info;           	//�ñߵ������Ϣ,�������ڴ��Ȩֵ
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
} ALGraph;                   	//ͼ���ڽӱ�����

//-------------------------------------
//--------��Ȩͼ���㷨-----------------
//-------------------------------------

//����ڽӾ���g
void DispMat1(MGraph g);

//���ڽӾ���gת�����ڽӱ�G
void MatToList1(MGraph g, ALGraph *&G);

//����ڽӱ�G
void DispAdj1(ALGraph *G);