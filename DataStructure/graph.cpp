
#include<iostream>

using namespace std;

// 邻接矩阵的存储表示
#define MaxInt 32767
#define MVNUM 100
typedef char VerTexType;
typedef int ArcType;
typedef void Status;

typedef struct
{
	VerTexType vexs[MVNUM];
	ArcType arcs[MVNUM][MVNUM];
	int vexnum, arcnum;
}AMGraph;

Status CreatUDN(AMGraph& G)
{

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
		cin >> V1 >> V2 >> w;
		i = LocateVex(G, V1);
		j = LocateVex(G, V2);

		G.arcs[i][j] = w;
		G.arcs[j][i] = G.arcs[i][j];
	}

	return ;
}



