//TBTNode *tbt 传入的是根节点

void 执行前序线索二叉树(TBTNode *tbt)
{
	if(tbt!=NULL)
	{
		TBTNode *p=tbt;			//p遍历指针指向根节点
		while(p!=NULL)
		{
			while(p->lTag==0)	//p的左标记为0（不是线索的话，一直往左走）
			{
				visit(p);		//边访问
				p=p->lchild;	//边往左孩子走
			}
			visit(p);			//否则往右走
			p=p->rchild;
		}
	}

}
