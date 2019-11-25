//图的基础算法-深度优先遍历

void BFS(AGraph *G,int v,int visit[maxSize]);
{
    边结点 *p;                              //定义一个遍历指针*p并且初始化
    int que[maxSize],front=0;rear=0;        //初始化结果队列
    int j;                                  //j为出队服务&目标队列
    visit(v);                               //访问并改写
    visit[v]=1;
    rear=(rear+1)%maxSize;                  //防溢出
    que[rear]=v;                            //出队，进入判断队列
    while(front!=rear)
    {
        front=(front+1)%maxSize;            //防溢出
        j=que[front];                       //出队，进入结果队列
        p=G->adjList[j].first;              //p所在的邻接点(A0与A1)这条边的第一条边上
        while (p!=NULL)
        {
            if (visit[p->adjv]==0)         //如果这条线的另一个顶点没有被访问过(取p—>adjv代表另一个顶点)
            {
                visit(p->daj=v);            //访问并改写
                visit[p->adjv]=1;
                rear=(rear+1)%maxSize;      //防溢出
                que[rear]=p->adjv;          //出队，进入判断队列
            }
            p=p->next;
        }
        
    }
}