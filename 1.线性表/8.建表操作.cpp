˳�����
int A[maxSize];							//����һ������ΪmaxSize��A����
int length;								//˳�����
int creatList(int A[],int &length)		//int A[]=������
{
	std::cin>>length;					//����length����
	if(length>maxSize)					//����������ֵ
		return 0;						//ʧ�ܷ���0
	for(int i=0;i<length;++i)			//ѭ������
		std::cin>>A[i];
	return 1;

}


β�巨����������
//β�巨
void creatLinkListR(Lnode *&head)			//*&headָ��
{
	head=(LNode*)malloc(sizeof(LNode));		//�����ͷ���ĵ�����洢�ռ�
	head->next=NULL;
	LNode *p=NULL;
	LNode *r=head;								//rָ��ʼ��ָ��β����㣬��Ϊ������Ŀռ���head��Ϊβ���
	int n;										//������n
	std::cin>>n;								//����n
	for(int i=0;i<n;++i)						//ѭ��
	{
		p=(LNode*)malloc(sizeof(LNode));		//����һ��p���������ӵ���һ��������
		p->next=NULL;
		std::cin>>p->data;						//ѭ������data��ֵ
		p->next=r->next;
		r->next=p;
		r=p;									//p���������һ��������Ը�ֵ��r
	}
}

//ͷ�巨
void creatLinkListH(Lnode *&head)			//*&headָ��
{
	head=(LNode*)malloc(sizeof(LNode));		//�����ͷ���ĵ�����洢�ռ�
	head->next=NULL;
	LNode *p=NULL;
	int n;										//������n
	std::cin>>n;								//����n
	for(int i=0;i<n;++i)						//ѭ��
	{
		p=(LNode*)malloc(sizeof(LNode));		//����һ��p���������ӵ���һ��������
		p->next=NULL;
		std::cin>>p->data;						//ѭ������data��ֵ
		p->next=head->next;
		head->next=p;
	}
}