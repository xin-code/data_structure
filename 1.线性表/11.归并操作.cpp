��·�鲢
//�������Ա�ϲ���Ϊһ�����Ա�

˳���Ĺ鲢
//int a[]�������ĵ�һ����Ҫ���鲢������a
//mΪ����a�ĳ���
//int b[]�������ĵڶ�����Ҫ���鲢������b
//nΪ����b�ĳ���
//int c[]�鲢��ɺ������
int ˳���鲢(int a[],int m,int b[],int n,int c[])
{
	int i=0;				//iָ��a����ĵ�һ����
	int j=0;				//jָ��b����ĵ�һ����
	int k=0;				//����������β��λ����Ϣ
	while(i<m&&j<n)
	{
		if(a[i]<b[j])		//��һ������iλ���ϵ�С�ڵڶ�������jλ���ϵ�ʱ��
			c[k]=a[i];		//���i���Сһ���������c������
			k++;			//λ�ú���
			i++;			//λ�ú���
		else
			c[k++]=b[j++];	//����b�����ֵ��ֵ��c��j��k����
	}//��ʱ������һ�����鱻�鲢���
	while(i<m)
		c[k++]=a[i++];		//ֱ��ȫ������c����kλ�ú�
	while(j<n)
		c[k++]=b[i++];		//ֱ��ȫ������c����kλ�ú�
}

����Ĺ鲢
//������������ ABCΪ����ͷָ��
void ����鲢(LNode *A,LNode *B,LNode *&C)		
{
	LNode *p=A->next;		//pָ��A�ĺ�̽��
	LNode *q=B->next;		//qָ��B�ĺ�̽��
	LNode *r;				//ΪC������Ƶ��µ�ָ�룬ʼ��ָ��C�����β��
	C=A;//����C��A������ͷ���
	C->next=NULL;			//��ʼ��C����
	free(B);				//�ͷŵ�B��ͷ���
	r=C;					//rָ��C��β���
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q-data)
		{
			r->next=p;		//pС�����뵽r�ĺ���
			p=p->next;		//p����һλ
			r=r->next;		//r����һλ��β��λ�ã�
		}
		else
		{
			r->next=q;		//qС�����뵽r�ĺ���
			q=q->next;		//q����һλ
			r=r->next;		//r����һλ��β��λ�ã�
		}
	}
	if(p!==NULL)
		r->next=p;
	if(q!==NULL)
		r->next=q;

}

�鲢����һ�����������
//�½��ĵ������뵽ͷ���֮��
//������������ ABCΪ����ͷָ��
void �鲢��������LNode *A,LNode *B,LNode *&C��
{
	LNode *p=A->next;		//pָ��A�ĺ�̽��
	LNode *q=B->next;		//qָ��B�ĺ�̽��
	LNode *s;/ΪC������Ƶ��µ�ָ��s��ʼ��ָ��C�����β��
	C=A;//����C��A������ͷ���
	C->next=NULL;			//��ʼ��C����
	free(B);				//�ͷŵ�B��ͷ���
	while(p!=NULL&&q!=NULL)
	{
		if(p->data<=q-data)		//�µ��Ľ����뵽ͷ���֮��
		{
			s=p;			
			p=p->next;
			s->next=c->next;
			c->next=s;
		}
		else
		{
			s=p;
			q=q->next;
			s->next=c->next;
			c->next=s;
		}
	}
	while(p!==NULL)
	{
		s=p;
		p=p->next;
		s->next=c->next;
		c->next=s;
	}

	while(q!==NULL)
	{
			s=p;
			q=q->next;
			s->next=c->next;
			c->next=s;
	}
}
