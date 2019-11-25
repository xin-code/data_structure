//边结点
typedef struct 边结点
{
    int 邻接顶点;           //邻接顶点(这条变所指顶点)
    struct 边结点 *next;
}边结点;

//图的顶点结构体设计
typedef struct 
{
    int data;
    边结点 *first;
}图结点;

//图的结构体设计
typedef struct
{
    图结点 List[maxSize];
    int n,e;                //n:顶点，e:边的个数
}图;

