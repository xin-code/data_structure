���Ա�
//ȡ���ֵ
int max=a[0];				//�ӵ�һ������ʼ��ʹ���Ϊ���ֵ
int maxID=0;				//���ֵ���Ϊ0
for(int i=0;i<n;++i)		//ѭ��
{
	if(max<a[i])			//�����һ����С�ڵ�i����
	{
		max=a[i];			//���i����Ϊ���ֵ
		maxID=i;			//���ֵ��Ǳ��i
	}
}
//ȡ��Сֵ
int min=a[0];
int minID=0;
for(int i=0;i<n;++i)
{
	if(min>a[i])
	{
		min=a[i];
		minID=i;
	}
}

����
//ȡ���ֵ
LNode *p,*q;				//pһֱ������ q��Ϊ��¼λ�õ�ָ��
int max=head->next->data;	//�ӵ�һ������data�������򣩿�ʼ��ʹ���Ϊ���ֵ
q=p=head->next;				//q������¼���ֵ��λ��
while(p!==NULL)
{
	if(max<p->data)			//�����һ������data��������С�ڵ�p��data��������
	{
		max=p->data;		//���ֵ��ȡp��data��������ֵ
		q=p;				//q��ȡ���data��������ֵΪ��ǰѭ��������ֵ
	}
	p=p->next;				//����������
}
//ȡ��Сֵ
LNode *p,*q;
int min=head->next->data;
q=p=head->next;
while(p!==NULL)
{
	if(min>p->data)
	{
		min=p->data;
		q=p;
	}
	p=p->next;
}