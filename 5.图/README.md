### 图
- 概念：图是由顶点的有穷集合(V)和边的集合(E)组成
#### 无向图&有向图  
1.  无向图  
`无向图`：没条边都没有方向  
边：(A1，A3)  
度：顶点A1点的度为3  
2.  有向图  
`有向图`：每条边(弧)都有方向  
边(弧)：<A1，A3>  
度：A1的入度为2，出度为2，度为3  
![无向图&有向图](/5.图/png/无向图&有向图.png)  
#### 无向完全图&&有向完全图  
1.  无向完全图  
边的个数：n(n-1)/2【n为顶点数】  
2.  有向完全图  
边的个数：n(n-1)【n为顶点数】  
![无向完全图&&有向完全图](/5.图/png/无向完全图&&有向完全图.png)  
#### 带权图  
![带权图](/5.图/png/带权图.png)  
#### 子图  
![子图](/5.图/png/子图.png)  
1.  路径：是一个顶点到另一个顶点的序列  
2.  路径长度：路径上边的个数  
![路径](/5.图/png/路径.png)  
#### 环：第一个顶点到最后一个顶点相同  
![环](/5.图/png/环.png)  
#### 简单路径：序列中顶点不重复出现的路径  
![简单路径](/5.图/png/简单路径.png)  
#### 简单环：序列中除了第一个和最后一个顶点重复出现，其余顶点不重复出现的环  
![简单环](/5.图/png/简单环.png)  
#### 连通图：图中任意一对顶点连通  
![连通图](/5.图/png/连通图.png)  
#### 非连通图(A4与A7没有连通)  
![非连通图](/5.图/png/非连通图.png)  
### 存储结构  
1.  顺序存储结构  
- 存储顶点信息  
- 存储顶点关系之间的信息(有向图) 
- 邻接点：假若顶点v和顶点w之间存在一条边，则称顶点v和w互为邻接点(其实是一条线)  
![顺序存储结构](/5.图/png/顺序存储结构.png)  
![顺序存储结构-带权图](/5.图/png/顺序存储结构-带权图.png)   
2.  链式存储结构  
- 邻接表(由起点引出来的边)  
- 逆邻接表(由终点引出来的边)  
![邻接表-逆邻接表](/5.图/png/邻接表-逆邻接表.png)  
### 图的基础算法  
1.  图的遍历  
- 深度优先遍历(DFS)  
![图的基础算法-深度优先遍历](/5.图/png/图的基础算法-深度优先遍历.png)  
- 广度优先遍历(BFS)  
![图的基础算法-广度优先遍历](/5.图/png/图的基础算法-广度优先遍历.png)  
### 生成树  
- 生成树：去掉所有环，即为生成树  
![生成树](/5.图/png/生成树.png)  
- 最小生成树：带权值最小的树  
![最小生成树](/5.图/png/最小生成树.png)  
- 如何构建最小生成树  
1.  从某个结点出发  
2.  从该结点引出的边中选出`权值最小`的边  
3.  该结点与边构成一部分生成树  
4.  循环(2.3.步骤),但不允许生成环  
- Prim算法  
![prim算法](/5.图/png/prim算法.png)  

---
:bookmark:By:zxg  
