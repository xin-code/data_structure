//广度优先遍历
/*
规则:
①从上至下
②从左至右
*/

//BTNode *bt其中bt指的是二叉树的指针(首先从根节点开始进入)
void 层次遍历（BTNode *bt）
{
	if(bt!=NULL)				//根节点不为0则继续（不是空树）
	{
		int front,rear;			//定义队列头尾
		BTNode *que[maxSize];	//定义一个队列
		front=rear=0;			//初始化
		BTNode *p;				//定义*p遍历指针
		rear=(rear+1)%maxSize;	//为了防止溢出
		que[rear]=bt;			//根节点入队（尾部）
		while(front!=rear)		//如果队列不为空
		{
			front=(front+1)%maxSize;	//为了防止溢出
			p=que[front];				//从队头出队一个结点
			visit(p);
			if(p->lchild!=NULL)			//左孩子不为空
			{
				rear=(rear+1)%maxSize;	//为了防止溢出
				que[rear]=p->lchild;	//左孩子入队（尾部）
			}
			if(p->rchild!=NULL)			//右孩子不为空
			{
				rear=(rear+1)%maxSize;	//为了防止溢出
				que[rear]=p->rchild;	//右孩子入队（尾部）
			}
		}
	}
}