//后序遍历（非递归）
//顺序:左右根
/*
思路：
先序：根左右
逆后序：根右左
后序：左右根（把逆后序的数入栈再出栈即可）
*/

（入栈顺序：右孩子先入栈，左孩子再入栈）
//BTNode *bt其中bt指的是二叉树的指针(首先从根节点开始进入)
void 后序遍历(BTNode *bt)
{
	if(bt!=NULL)					//根节点不为0则继续（不是空树）
	{
		BTNode *Stack[maxSize];		//建立一个栈用来存储遍历的数字以及是否出栈
		int top=-1;					//初始化
	
		BTNode *Stack1[maxSize];	//建立另外一个栈用来逆逆后序栈 形成最后的正确后序序列
		int top1=-1;					//初始化


		BTNode *p=NULL;				//*p遍历指针跟随bt指针
		Stack[++top]=bt;			//二叉树的bt指针根节点入栈
		while(top!=-1)				//当栈不为空时
		{
			p=Stack[top--];			//把栈内的元素出栈赋给*p遍历指针（栈-1）
			
			stack1[++top1]=p;		//把出栈的序列'再次'放入用来逆逆后序的栈内（栈+1）

			if(p->rchild!=NULL)				//如果右孩子不为空
				Stack[++top]=p->rchild;		//右孩子首先入栈
			if(p->lchild!=NULL)				//如果左孩子不为空
				Stack[++top]=p->lchild;		//左孩子再入栈
		}
		while(top1!=-1)			//如果用来逆逆后序的栈不为空
		{
			p=Stack1[top1--];	//依次出栈
			visit(p);
		}
	}
}