//先序遍历（非递归）
//顺序:根左右

（入栈顺序：右孩子先入栈，左孩子再入栈）
//BTNode *bt其中bt指的是二叉树的指针(首先从根节点开始进入)
void 先序遍历(BTNode *bt)
{
	if(bt!=NULL)					//根节点不为0则继续（不是空树）
	{
		BTNode *Stack[maxSize];		//建立一个栈用来存储遍历的数字以及是否出栈
		int top=-1;					//初始化
		BTNode *p=NULL;				//*p遍历指针跟随bt指针
		Stack[++top]=bt;			//二叉树的bt指针根节点入栈
		while(top!=-1)				//当栈不为空时
		{
			p=Stack[top--];			//把栈内的元素出栈赋给*p遍历指针（栈-1）
			visit(p);				
			if(p->rchild!=NULL)				//如果右孩子不为空
				Stack[++top]=p->rchild;		//右孩子首先入栈
			if(p->lchild!=NULL)				//如果左孩子不为空
				Stack[++top]=p->lchild;		//左孩子再入栈
		}
	}
}