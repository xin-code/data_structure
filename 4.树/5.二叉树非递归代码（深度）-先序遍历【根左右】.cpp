//����������ǵݹ飩
//˳��:������

����ջ˳���Һ�������ջ����������ջ��
//BTNode *bt����btָ���Ƕ�������ָ��(���ȴӸ��ڵ㿪ʼ����)
void �������(BTNode *bt)
{
	if(bt!=NULL)					//���ڵ㲻Ϊ0����������ǿ�����
	{
		BTNode *Stack[maxSize];		//����һ��ջ�����洢�����������Լ��Ƿ��ջ
		int top=-1;					//��ʼ��
		BTNode *p=NULL;				//*p����ָ�����btָ��
		Stack[++top]=bt;			//��������btָ����ڵ���ջ
		while(top!=-1)				//��ջ��Ϊ��ʱ
		{
			p=Stack[top--];			//��ջ�ڵ�Ԫ�س�ջ����*p����ָ�루ջ-1��
			visit(p);				
			if(p->rchild!=NULL)				//����Һ��Ӳ�Ϊ��
				Stack[++top]=p->rchild;		//�Һ���������ջ
			if(p->lchild!=NULL)				//������Ӳ�Ϊ��
				Stack[++top]=p->lchild;		//��������ջ
		}
	}
}