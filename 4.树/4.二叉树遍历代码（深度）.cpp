//ʹ�õݹ��㷨
void r(BTNode)
{
	if(p!=NULL)
	{
		visit(p);//��������
		r(p->lchild);
		visit(p);//��������
		r(p->rchild);
		visit(p);//��������
	}
}