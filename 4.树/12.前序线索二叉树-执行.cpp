//TBTNode *tbt ������Ǹ��ڵ�

void ִ��ǰ������������(TBTNode *tbt)
{
	if(tbt!=NULL)
	{
		TBTNode *p=tbt;			//p����ָ��ָ����ڵ�
		while(p!=NULL)
		{
			while(p->lTag==0)	//p������Ϊ0�����������Ļ���һֱ�����ߣ�
			{
				visit(p);		//�߷���
				p=p->lchild;	//����������
			}
			visit(p);			//����������
			p=p->rchild;
		}
	}

}
