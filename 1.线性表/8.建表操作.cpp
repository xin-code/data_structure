顺序表建表
int A[maxSize];							//定义一个长度为maxSize的A数组
int length;								//顺序表长度
int creatList(int A[],int &length)		//int A[]=引用型
{
	std::cin>>length;					//输入length长度
	if(length>maxSize)					//如果超过最大值
		return 0;						//失败返回0
	for(int i=0;i<length;++i)			//循环输入
		std::cin>>A[i];
	return 1;

}


尾插法建表（单链表）
//尾插法
void creatLinkListR(Lnode *&head)			//*&head指针
{
	head=(LNode*)malloc(sizeof(LNode));		//申请带头结点的单链表存储空间
	head->next=NULL;
	LNode *p=NULL;
	LNode *r=head;								//r指针始终指向尾部结点，因为刚申请的空间内head就为尾结点
	int n;										//结点个数n
	std::cin>>n;								//输入n
	for(int i=0;i<n;++i)						//循环
	{
		p=(LNode*)malloc(sizeof(LNode));		//申请一个p，可以连接到下一个方向上
		p->next=NULL;
		std::cin>>p->data;						//循环输入data的值
		p->next=r->next;
		r->next=p;
		r=p;									//p结点就是最后一个结点所以赋值给r
	}
}

//头插法
void creatLinkListH(Lnode *&head)			//*&head指针
{
	head=(LNode*)malloc(sizeof(LNode));		//申请带头结点的单链表存储空间
	head->next=NULL;
	LNode *p=NULL;
	int n;										//结点个数n
	std::cin>>n;								//输入n
	for(int i=0;i<n;++i)						//循环
	{
		p=(LNode*)malloc(sizeof(LNode));		//申请一个p，可以连接到下一个方向上
		p->next=NULL;
		std::cin>>p->data;						//循环输入data的值
		p->next=head->next;
		head->next=p;
	}
}