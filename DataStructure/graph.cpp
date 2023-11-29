
#include<iostream>

using namespace std;

// 邻接矩阵的存储表示
#define MaxInt 32767
#define MVNUM 100
#define OK 1
#define ERROR 0

typedef char VerTexType;
typedef int ArcType;
typedef int Status;

typedef struct
{
	VerTexType vexs[MVNUM];
	ArcType arcs[MVNUM][MVNUM];
	int vexnum, arcnum;
}AMGraph;

int LocateVex(AMGraph G, VerTexType u)
{
	int i = 0;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vexs[i])
			return i;
	}
	return -1;
}

Status CreatUDN(AMGraph& G)
{
	char V1, V2;  // VerTex
	int w;		  // weight

	cin >> G.vexnum >> G.arcnum;

	// input the information of vextexs
	for (int i = 0; i < G.vexnum; ++i)
	{
		cin >> G.vexs[i];
	}

	// initial the adjacent matrix 
	for (int i = 0; i < G.vexnum; ++i)
	{
		for (int j = 0; j < G.vexnum; ++j)
		{
			G.arcs[i][j] = MaxInt;
		}
	}

	// creat the adjacent matrix
	for (int k = 0; k < G.arcnum; k++)
	{
		int i = 0, j = 0;
		cin >> V1 >> V2 >> w;
		i = LocateVex(G, V1);
		j = LocateVex(G, V2);

		G.arcs[i][j] = w;
		G.arcs[j][i] = G.arcs[i][j];
	}

	return OK;
}

/* 图的邻接表存储表示 */
typedef int OtherInfo;

//弧边的结点结构
typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* nextarc;
	OtherInfo info;
}ArcNode;

// 顶点的结点结构
typedef struct VNode
{
	VerTexType data;
	ArcNode* firstarc;
}VNode,AdjList[MVNUM];  //AdjList v <===> VNode v[MVNum];



// 图的结构定义
typedef struct
{
	AdjList vertices;
	int vexnum, arcnum;

}ALGraph;

// 用邻接表表示法创建无向网

int LocateVex2(ALGraph G, VerTexType u)
{
	int i = 0;
	for (i = 0; i < G.vexnum; i++)
	{
		if (u == G.vertices[i].data)
			return i;
	}
	return -1;
}

Status CreateUDG(ALGraph& G)
{
	VerTexType v1, v2;

	cin >> G.vexnum >> G.arcnum;

	// initial vextext node array
	for (int i = 0; i < G.vexnum; ++i)
	{
		cin >> G.vertices[i].data;
		G.vertices[i].firstarc = NULL;
	}

	for (int k = 0; k < G.arcnum; ++k)
	{
		int i = 0, j = 0;
		cin >> v1 >> v2;
		i = LocateVex2(G, v1);
		j = LocateVex2(G, v2);

		ArcNode* p1 = new ArcNode;
		p1->adjvex = j;
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1;

		ArcNode* p2 = new ArcNode;
		p2->adjvex = i;
		p2->nextarc = G.vertices[j].firstarc;
		G.vertices[j].firstarc = p2;
	}

	return OK;
}


