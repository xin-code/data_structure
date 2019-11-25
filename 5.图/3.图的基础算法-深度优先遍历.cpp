//图的基础算法-深度优先遍历(DFS)
/*定义两个数组 
一个数组用来标识数组下标与字母对应关系 A0对应0;A1对应1;A2对应2;A3对应3;
另一个数组用来存储顶点是否已经访问过，访问过的标记为1，没有访问过的为0
*/
//v是用来不断在visit数组中遍历

void DFS(int v,Graph *G)        //int v指的是顶点数组的下标(对应关系) Graph *G定义一个图的指针G
{
    visit[v]=1;                 //从visit数组第一个数开始遍历，值为1(表示已经记录该点，防止死循环的产生)
    visit(v);                   //访问该点
    边结点 *q=G->List[v].first; //边结点*q指针取v所对应的A0的第一条边
    while (q!=NULL)
    ｛
        if (visit[q->adjv==0])   //如果这条线的另一个顶点没有被访问过(取q—>adjv代表另一个顶点)，进行递归
        {
            DFS(q->adjv,G);
            q=q->next;
        }
        
    ｝
}