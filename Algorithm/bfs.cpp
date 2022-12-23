#include <stdio.h>
#include <stdlib.h>


#define MAX_VERTEX_NUM 20
#define VRType int
#define VertexType int
bool visited[MAX_VERTEX_NUM];
typedef struct Queue {
    VertexType data;
    struct Queue * next;
}Queue;


typedef struct {
    VRType adj;
} ArcCell, AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];


typedef struct {
    VertexType vex[MAX_VERTEX_NUM];
    AdjMatrix arcs;
    int vexNum, arcNum;
}MGraph;



//int main()
//{

//}



















