//������ȱ���
/*
����:
�ٴ�������
�ڴ�������
*/

//BTNode *bt����btָ���Ƕ�������ָ��(���ȴӸ��ڵ㿪ʼ����)
void ��α�����BTNode *bt��
{
	if(bt!=NULL)				//���ڵ㲻Ϊ0����������ǿ�����
	{
		int front,rear;			//�������ͷβ
		BTNode *que[maxSize];	//����һ������
		front=rear=0;			//��ʼ��
		BTNode *p;				//����*p����ָ��
		rear=(rear+1)%maxSize;	//Ϊ�˷�ֹ���
		que[rear]=bt;			//���ڵ���ӣ�β����
		while(front!=rear)		//������в�Ϊ��
		{
			front=(front+1)%maxSize;	//Ϊ�˷�ֹ���
			p=que[front];				//�Ӷ�ͷ����һ�����
			visit(p);
			if(p->lchild!=NULL)			//���Ӳ�Ϊ��
			{
				rear=(rear+1)%maxSize;	//Ϊ�˷�ֹ���
				que[rear]=p->lchild;	//������ӣ�β����
			}
			if(p->rchild!=NULL)			//�Һ��Ӳ�Ϊ��
			{
				rear=(rear+1)%maxSize;	//Ϊ�˷�ֹ���
				que[rear]=p->rchild;	//�Һ�����ӣ�β����
			}
		}
	}
}