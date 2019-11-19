//使用递归算法
void r(BTNode)
{
	if(p!=NULL)
	{
		visit(p);//先序序列
		r(p->lchild);
		visit(p);//中序序列
		r(p->rchild);
		visit(p);//后序序列
	}
}