//中序线索二叉树

//TBTNode *p定义了一个p遍历指针 用来遍历二叉树
//TBTNode *&pre定义pre指针用来记录p遍历指针的前驱结点
void 中序线索二叉树(TBTNode *p,TBTNode *&pre)
{
	if(p!=NULL)
	{
		中序线索二叉树(p->lchild,pre);		//遍历调用函数 *p遍历指针遍历左孩子结点
		if(p->lchild==NULL)					//如果左孩子为空
		{
			p->lchild=pre;					//【如果左孩子为空】就把p的左孩子指向前驱结点
			p->lTag=1;						//【如果左孩子为空】就把p的左标记设置成1
		}
		if(pre!=NULL&&pre->rchild==NULL)	//如果右孩子为空
		{
			pre->rchild=p;					//【如果右孩子为空】就把p的右孩子指向前驱结点
			pre->rTag=1;					//【如果右孩子为空】就把p的右标记设置成1
		}
		pre=p;								//pre的值跟上p
		中序线索二叉树(p->rchild,pre);		//遍历调用函数 *p遍历指针遍历右孩子结点
	}
}